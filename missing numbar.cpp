//search missing element
#include<stdio.h>
main()
{
	int n,t;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int arr[n-1];
	printf("Enter the elements in the array");
	for(int i=0;i<n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if(arr[i]>arr[j])
			{
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
		}
	}
	for(int i=0;i<n-1;i++)
	{
			if(arr[i]!=(i+1))
			{
			printf("%d",i+1);
			break;
		}
		else if(i==n-1)
		{
			printf("%d",i+1);
			
	}
			}
	return -1;
}
