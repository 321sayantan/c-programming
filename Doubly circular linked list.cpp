// Implementation of doubly circular linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head,*tail,*newnode;

main()
{
	int c=1;
	while(c!=0)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		head=tail=newnode;
		head->next=newnode;
		head->prev=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		newnode->next=head;
		head->prev=newnode;
		tail=newnode;
		
	}
	printf("Enter 0 to exit");
	scanf("%d",&c);
	}
	
	struct node *temp;
	temp=head;
	while(temp!=tail)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
