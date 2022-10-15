//deletion in double linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head,*tail,*temp,*newnode;
int item;

createdll()
{
	int n=1;
	//struct node *newnode;
	while(n)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&newnode->data);
		newnode->next=newnode->prev=NULL;
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else
		{
			newnode->prev=tail;
			tail->next=newnode;
			tail=newnode;
		}
		printf("enter 1 if u want to continue\n");
		scanf("%d",&n);
	}
}

insertbeg(int item)
{
	newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
	newnode->next=newnode->prev=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
}

insertend(int item)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=newnode->prev=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
}

insertspeci(int item)
{
	int n;
	int i=1;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=newnode->prev=NULL;
	temp=head;
	printf("Enter the position");
	scanf("%d",&n);
	while(i<n)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp;
	newnode->prev=temp->prev;
	temp->prev->next=newnode;
	temp->prev=newnode;
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
	createdll();
	
	int ch;
	char c;
	do
	{
	printf("1.Insert  element at the beginning\n2.Insert the element at the end\n3.Insert at specific position\n4.Traverse the list in order\n");
	printf("Enter your choice\n");
	scanf(" %d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the data you want to insert\n");
	        scanf(" %d",&item);
			insertbeg(item);
			break;
			
		case 2:
			printf("Enter the data you want to insert\n");
	        scanf(" %d",&item);
			insertend(item);
			break;
			
		case 3:
			printf("Enter the data you want to insert\n");
        	scanf(" %d",&item);
			insertspeci(item);
			break;
			
		case 4:
			traverse();
			break;
						
		default:
		printf("wrong input");
		}
		fflush(stdin);
		printf("Do you want to continue y/n");
		scanf(" %c",&c);
	}
	while((c=='y')||(c=='y'));

}
