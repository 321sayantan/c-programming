// sum of the continous array element is equals to the given number
#include<stdio.h>
main()
{
	int n,s;
	printf("Enter the array size");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
}
printf("Enter the number");
scanf("%d",&s);
for(int i=0;i<n;i++)
{
	int sum=0;
	for(int j=i;j<n;j++)
	{
		if(s>sum)
		{
		sum=sum+arr[j];
		printf("%d",sum);
	}
	    else if (s==sum)
		{
		printf("%d ",i);
		break;
	}
	else if (s>sum)
	{
		continue;
	}
	}
	
}
}

