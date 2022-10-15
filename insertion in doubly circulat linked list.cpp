//Doubly Circular linked list insertion
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head,*tail,*temp;

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
			newnode->next=head;
			tail->next=newnode;
			tail=newnode;
			head->prev=tail;
		}
		printf("Enter 0 to exit");
		scanf("%d",&c);
	}
}

insertbeg()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	newnode->next=head;
	newnode->prev=tail;
	head->prev=newnode;
	tail->next=newnode;
	head=newnode;
}

insertend()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	newnode->next=head;
	newnode->prev=tail;
	tail->next=newnode;
	tail=newnode;
}

int count()
{
	temp=head;
	int i=0;
	while(temp!=tail)
	{
		temp=temp->next;
		i++;
	}
	i=i+1;
//	printf("%d",i);
	return i;
}

insertspeci()
{
	int i=1,pos;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the position");
	scanf("%d",&pos);
	int l=count();
	if(pos==1)
	{
		insertbeg();
	}
	else if(pos==l)
	{
		insertend();
	}
	else if((pos>l)||(pos<1))
	{
		printf("invalid position\n");
	}
	else
	{
	printf("Enter the data");
	scanf("%d",&newnode->data);
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode->prev=temp;
	newnode->next=temp->next;
	temp->next->prev=newnode;
	temp->next=newnode;
	
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
	int a=1;
	char ch;
	createlist();
	while(a!=0)
	{
	printf("1. insert at beginning \n2. insert at end \n3. insert at specific position \n4. traverse");
	printf("\nEnter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insertbeg();
		    break;
		
		case 2:
			insertend();
			break;
		
		case 3:
		    insertspeci();
		    break;
			
		case 4:
			traverse();
			break;
	}
	printf("Do you want to continue............ press 1");
	scanf("%d",&a);
}
}
