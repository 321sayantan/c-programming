#include<stdio.h>

main()
{
	int m=3,n=3,sum,c;
	int wealth[m];
	int arr[m][n];
	printf("Enter a %d*%d matrix\n",m,n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix is\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<m;i++)
	{
		sum=0;
		for(int j=0;j<n;j++)
		{
			sum=sum+arr[i][j];
		}
		wealth[i]=sum;
	}
	int max=wealth[0];
	for(int i=0;i<n;i++)
	{
		if(max<wealth[i])
		{
			max=wealth[i];
			c=i+1;
		}
	}
	printf("%d is the richest with wealth %d",c,max);
}
