// Stack implementation using arrays
#include<stdio.h>
#define n 5
int stack[n];
int top=-1;

push()
{
	int item;
	if(top==(n-1))
	{
		printf("overflow");
	}
	else
	{
		printf("Enter the data");
		scanf("%d",&item);
		top++;
		stack[top]=item;
	}
}

pop()
{
	if(top==-1)
	{
		printf("Underflow");
	}
	else
	{
		top--;
	}
}

peek()
{
	printf("The top element is %d",stack[top]);
}

display()
{
	for(int i=top;i>=0;i--)
	{
		printf("%d",stack[i]);
	}
}
main()
{
	int ch,c=1;
	while(c!=0)
	{
		printf("1.push \n2.pop \n3.peek \n4.display \nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
		
		    case 2:
			    pop();
			    break;
			
			case 3:
			    peek();
		     	break;		
		    
		    case 4:
		    	display();
		    	break;
		    	
		    default:
			printf("wrong input");	
					
		}
		printf("Enter 0 to exit");
		scanf("%d",&c);
	}
}

