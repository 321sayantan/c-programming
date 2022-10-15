//leader element in an array
#include<stdio.h>
main()
{
	int j=0,n;
	printf("Enter the number of elements in an array");
	scanf("%d",&n);
	int arr[n],a[n];
	printf("Enter the elements in an array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[n-1];
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]>=max)
		{
		max=arr[i];
		a[j]=arr[i];
		j++;
	}
	}
	for(int i=j-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
}
