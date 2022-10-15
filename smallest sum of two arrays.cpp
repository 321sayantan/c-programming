//Smallest sum of two arrays
#include<stdio.h>
int main()
{
	int a,b,n,sum=0;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int ar1[n];
	int ar2[n];
	printf("Enter the elements in first array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar1[i]);
	}
	printf("Enter the elements in second array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar2[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ar1[i]>ar1[j])
			{
				a=ar1[i];
				ar1[i]=ar1[j];
				ar1[j]=a;
			}
			
			if(ar2[i]<ar2[j])
			{
				b=ar2[i];
				ar2[i]=ar2[j];
				ar2[j]=b;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",ar1[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",ar2[i]);
	}	
	for(int i=0;i<n;i++)
	{
		sum=sum+(ar1[i]*ar2[i]);
	}
	printf("sum is %d",sum);
}
