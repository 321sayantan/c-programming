// Circular linked list using head and tail pointer
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head,*tail,*temp ;

create()
{
	struct node *newnode;
	head=NULL;
	int c=1;
	while(c!=0)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=tail=newnode;
	}
	else
	{
		tail->next=newnode;
		tail=newnode;
	}
		tail->next=head;
		printf("Enter 0 to exit");
    	scanf("%d",&c);
}
}

traverse()
{
	temp=head;
	while(temp->next!=head)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
main()
{
	create();
	traverse();
	
}
