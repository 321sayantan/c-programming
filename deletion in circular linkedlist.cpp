// Deletion in Circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*newnode,*tail,*temp;

createlist()
{
	int c=1;
	tail=NULL;
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

traverse()
{
	temp=tail->next;
	while(temp->next!=tail->next)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
	printf("\n");
}

deletebeg()
{
	temp=tail->next;
	if(tail==NULL)
	{
		printf("List is empty");
	}
	else if(temp->next==tail)
	{
		tail=NULL;
		free(temp);
	}
	else
	{
		tail->next=temp->next;
		free(temp);
	}
}

deleteend()
{
	struct node *current;
	temp=tail->next;
	while(temp->next!=tail->next)
	{
		current=temp;
		temp=temp->next;
	}
	current->next=tail->next;
	tail=current;
	free(temp);
}

deletepos()
{
	int pos;
	struct node *current;
	printf("Enter the pssition");
	scanf("%d",&pos);
	int i=1;
	temp=tail->next;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	current=temp->next;
	temp->next=current->next;
	free(current);
	
}

main()
{
	int ch;
	createlist();
	traverse();
	int i=1;
	while(i!=0)
	{
	printf("1. Delete from beginning \n2. Delete from end \n3. Delete from specific position \n4.Traverse \n");
	printf("Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
	        deletebeg();
	        break;
	    
	    case 2:
            deleteend();
            break;
        
        case 3:
        	deletepos();
        	break;
        
		case 4:
		    traverse();
	  	    break;
		
		default:
			printf("Wrong input");
			 	
	} 
	printf("Enter 1 to continue......... 0 to exit");
	scanf("%d",&i);
}

}
