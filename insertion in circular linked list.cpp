//Insertion in Circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*tail,*newnode;

createlist()
{
	int c=1;
	while(c!=0)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(tail==NULL)
		{
			tail=newnode;
			tail->next=newnode;
		}
		else
		{
			newnode->next=tail->next;
			tail->next=newnode;
			tail=newnode;
		}
		printf("Enter 0 to exit");
		scanf("%d",&c);
	}
}

insertbeg()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data");
	scanf("%d",&newnode->data);
	if(tail==NULL)
	{
		tail=newnode;
		tail->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
	}
}

insertend()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data");
	scanf("%d",&newnode->data);
	if(tail==NULL)
	{
		tail=newnode;
		tail->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
	}
}

insertspeci()
{
	struct node *temp;
	temp=tail->next;
	int pos,i=1;
	printf("Enter the position you want to insert");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	if(pos==1)
	{
		if(tail==NULL)
	{
		tail=newnode;
		tail->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
	}
	}
	else
	{
		newnode->next=temp->next;
		temp->next=newnode;
	}
}

traverse()
{
	struct node *temp;
	temp=tail->next;
	while(temp!=tail)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
main()
{
	createlist();
	traverse();
	insertbeg();
	traverse();
	insertend();
	traverse();
	insertspeci();
	traverse();
}
