#include<stdio.h>
//#include<malloc.h>
#include<stdlib.h>
int main()
{
	struct node {
		int num;
		struct node *next;
	};
	struct node *head,*temp,*curr;
	head=NULL;
	for(int i=0;i<5;i++)
	{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&temp->num);
	temp->next=NULL;
	if(head!=NULL)
	{
		curr->next=temp;
		curr=temp;
	}
	else
	{
		head=curr=temp;
	}
}


struct node *ptr = head;
printf("\n\nList elements are - \n");
while(ptr != NULL) 
{
  printf("%d --->",ptr->num);
  ptr = ptr->next;
}

return 0;
}
