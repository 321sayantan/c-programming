//Circular linked list only using tail pointer
#include<iostream>
using namespace std;
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*tail,*newnode;

createcll()
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
	printf("Enter 0 to exit:");
	scanf("%d",&c);
}
}

traverse()
{
	struct node *temp;
	temp=tail->next;
//	while(temp->next!=tail->next)
//	{
//		printf("%d",temp->data);        //Method 1
//		temp=temp->next;
//	}
//	printf("%d",temp->data);

    do
    {
    	printf("%d",temp->data);
    	temp=temp->next;                 //Method 2
	}
	while(temp!=tail->next);
}

main()
{
	createcll();
	traverse();
}
