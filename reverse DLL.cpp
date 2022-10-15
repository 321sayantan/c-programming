#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head,*tail,*newnode,*current,*temp;

createdll()
{
	
	int c=1;
	while(c!=0)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->prev=NULL;
	printf("Enter the data");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		head=tail=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
	printf("Enter 0 to exit");
	scanf("%d",&c);
	}
}

traverse()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

reverse()
{
	current=head;
	if(current==NULL)
	{
		printf("No node available");
	}
	else
	{
		while(current!=NULL)
		{
			temp=current->next;
			current->next=current->prev;
			current->prev=temp;
			current=temp;
		}
		
		temp=tail;
		tail=head;
		head=temp;
	}
}

main()
{
	createdll();
	printf("Before Reverse\n");
	traverse();
	reverse();
	printf("After Reverse\n");
	traverse();
	}
