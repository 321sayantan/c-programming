//Linklist insertion
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*temp;

delbegin()
{
	if(head==NULL)
	{
		printf("No node available");
	}
	else
	{
	temp=head;
	head=head->next;
	free(temp);
}
}

void delend()
{
	struct node *prevnode;
	temp=head;
	while(temp->next!=NULL)
	{
		prevnode=temp;
		temp=temp->next;
	}
	if(head==NULL)
		printf("No node available");
		
	else
	prevnode->next=NULL;
	
	free(temp);
}

void delpos()
{
	struct node *nextnode;
	temp=head;
	int pos,i=1;
	printf("Enter the position");
	scanf("%d",&pos);
	if (head==NULL)
	{
		printf("invalid position");
	}
	else
	{
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
}
}

void traverse()
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
	temp=head;
	for(int i=1;i<=10;i++)
	{
		struct node *newnode=(struct node*)malloc(sizeof(struct node*));
		newnode->data=i;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{  	temp=head;
		while(temp->next!=NULL)
	{		temp=temp->next;	}	
	temp->next=newnode;
		}
	}
	do
	{
	printf("1.Delete element at the beginning\n2.Delete the element at the end\n3.Delete at specific position\n4.Traverse the list in order\n");
	printf("Enter your choice\n");
	scanf(" %d",&ch);
	switch(ch)
	{
		case 1:
			delbegin();
			break;
			
		case 2:
			delend();
			break;
			
		case 3:
			delpos();
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
