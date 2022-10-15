//Create circular doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head,*tail;

createlist()
{
	int c=1;
	struct node *newnode;
	while(c!=0)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data");
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=tail=newnode;
			newnode->next=head;
			newnode->prev=head;
		}
		else
		{
			newnode->prev=tail;
			tail->next=newnode;
			newnode->next=head;
			head->prev=newnode;
			tail=newnode;
		}
		printf("Enter 0 to exit");
		scanf("%d",&c);
	}
}

int count()
{
	struct node *temp;
	int i=1;
	temp=head;
	while(temp!=tail)
	{
		temp=temp->next;
		i++;
	}
	i=i+1;
	return (i);
}

delbeg()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("no list");
	}
	else if(head->next==head)
	{
		head=tail=NULL;
	}
	else
	{
    head->next->prev=tail;
    tail->next=head->next;
    head=temp->next;
    free(temp);
} 
}

delend()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("Empty list");
	}
	else if(count()==1)
	{
		head=NULL;
		free(temp);
	}
	else
	{
	temp=tail;
	temp->prev->next=head;
	head->prev=tail->prev;
	tail=temp->prev;
	free(temp);
}
}

delspeci()
{
	struct node *temp;
	int pos,i=1;
	temp=head;
	printf("Enter the position");
	scanf("%d",&pos);
	int l=count();
	if(head==NULL)
	{
		printf("Empty list");
	}
	else if(l==1)
	{
		head=NULL;
		free(temp);
	}
	else if(l==pos)
	{
		delend();
	}
	else if(pos<1 || pos>l)
	{
		printf("invalid position");
	}
	else
	{
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	temp->next->prev=temp->prev;
	temp->prev->next=temp->next;
	free(temp);
}
}

traverse()
{
	struct node *temp;
	temp=head;
	while(temp!=tail)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
}

main()
{
	createlist();
	delbeg();
	traverse();
	delend();
	traverse();
	delspeci();
	traverse();
}
