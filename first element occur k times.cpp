// first element in the array that occures k time in the arary
#include<stdio.h>
main()
{
	int n,k,count=1;
	printf("Enter the number of array elements");
	scanf("%d",&n);
	printf("Enter the number of occurance");
	scanf("%d",&k);
	int arr[n];
	printf("Enter the elements in the array");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(arr[i]==arr[j])
		count++;
	}
	if(count>=k)
	{
	printf("The number that occur k times is %d",arr[i]);
	break;
}
	
	else
	count=1;
}
}
