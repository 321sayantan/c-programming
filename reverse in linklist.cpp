//Reverse in single link list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head,*newnode,*temp,*nextnode,*prevnode,*currnode;

reverse()
{
	prevnode=NULL;
	currnode=nextnode=head;
	while(nextnode!=NULL)
	{
		nextnode=nextnode->next;
		currnode->next=prevnode;
		prevnode=currnode;
		currnode=nextnode;
	}
	head=prevnode;
}

traverse()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
}
main()
{
	//struct node *newnode;
	int n,item;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the data");
		scanf("%d",&item);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	if(head==NULL)
	{
		newnode->next=NULL;
	}
	else
	{
	newnode->next=head;
}
	head=newnode;
	}
	printf("Before reverse\n");
	traverse();
	reverse();
	printf("\nAfter reverse\n");
	traverse();
}
