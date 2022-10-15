// sort an array of 0's, 1's and 2's
#include<stdio.h>
main()
{
	int n,t;
	printf("Enter the number of array elements");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
