//linked list insertion
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*temp,*newnode;
int item;

insertbegin(int item)
{
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

insertend(int item)
{
	//struct node *temp;
	temp=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
}
int count()
{
	int c=0;
	temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		c++;
	}
	return c;
}
insertspeci(int item)
{
	int n;
	printf("Enter the position where you want to insert");
	scanf(" %d",&n);
	printf("%d\n",count());
	if(n>count())
	{
		printf("invalid position");
	}
	else
	{
		printf("%d",count());
		int i=1;
		temp=head;
		if(n==1)
		{
			insertbegin(item);
		}
		else
		{
		while(i<n-1)
		{
			temp=temp->next;
			i++;
		}
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=item;
		newnode->next=temp->next;
		temp->next=newnode;
			printf("%d",count());
		}
	}
	
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
			insertbegin(item);
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

