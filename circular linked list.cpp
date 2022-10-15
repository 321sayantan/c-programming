//Circular single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
} *newnode,*head,*temp;

createcl()
{
	int c=1;
		head=NULL;
	while(c!=0)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		temp->next=head;
		printf("Enter 0 to continue");
		scanf("%d",&c);
	}
}

traverse()
{
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
	temp=head;
	
	
//	while(temp->next!=head)
//	{
//		printf("%d",temp->data);    //method 1
//		temp=temp->next;
//	}
//	printf("%d",temp->data);

//    do
//    {
//    	printf("%d",temp->data);    //method 2
//    	temp=temp->next;
//	}
//	while(temp!=head);

     
     int n=0;
     while(n!=10)
     {
     	printf("%d",temp->data);   // method 3
     	temp=temp->next;
     	n++;
	 }
  
	}
}
main()
{
	createcl();
	traverse();
}
