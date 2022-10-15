// Reverse the Circular linked list
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

traverse()
{
	struct node *temp;
	temp=tail->next;
	while(temp->next!=tail->next)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("%d \n",temp->data);
}

reverse()
{
	struct node *previous,*current,*nextnode;
	current=tail->next;
	nextnode=current->next;
	if(tail==NULL)
	{
		printf("List is empty");
	}
	else
	{
		while(current!=tail)
		{
		previous=current;
		current=nextnode;
		nextnode=current->next;
		current->next=previous;
	}
	nextnode->next=tail;
	tail=nextnode;
	}
	
}
main()
{
	createlist();
	printf("Before Reversal\n");
	traverse();
	reverse();
	printf("After Reversal\n");
	traverse();
}
