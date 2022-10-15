//delete element in DLL
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head,*newnode,*tail,*temp;

createlist()
{
	int n;
	do{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=newnode->prev=NULL;
	printf("Enter the data");
	scanf("%d",&newnode->data);
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
	printf("press 1 to continue");
	scanf("%d",&n);
}
	while(n!=0);
}

delbeg()
{
	temp=head;
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		head=head->next;
		head->prev=NULL;
		free(temp);
	}
}

delend()
{
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		tail->prev->next=NULL;
		free(tail);
	}
}

delpos()
{
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp=head;
		int n,i=1;
		printf("Enter the position");
		scanf("%d",&n);
		while(i<n)
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
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
}

main()
{
	char ch,c;
	createlist();
	do
	{
	printf("1.Delete element at the beginning\n2.Delete the element at the end\n3.Delete at specific position\n4.Traverse the list in order\n");
	printf("Enter your choice\n");
	scanf(" %d",&ch);
	switch(ch)
	{
		case 1:
			delbeg();
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
