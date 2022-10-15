#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{
	struct node {
		int num;
		struct node *ptr;
	};
	typedef struct node NODE;
	NODE *start, *first, *temp;
	int count =0;
	char choice;
	first=NULL;
	do
	{
		start=(NODE*)malloc(sizeof (NODE));
		printf("Enter the data item \n");
		scanf("%d",&start->num);
		if(first !=NULL)
		{
				printf("%d\n",temp->num);
			temp->ptr=start;
			temp=start;
					printf("%d\n",temp->num);
					printf("%d\n",start);
		}
		else 
		{
			first=temp=start;
		}
		fflush(stdin);
		printf("Do you want to continue y or n");
		scanf("%c",&choice);
	}
	while((choice=='y'));
	temp-> ptr= NULL;
	temp=first;
	printf("status of the linked list is\n");
	while (temp!=NULL)
	{
		printf("%d\n",temp->num);
		count++;
		temp=temp->ptr;
	}
	printf("no of nodes in the list+%d\n",count);
	getch();
	return 0;
}
