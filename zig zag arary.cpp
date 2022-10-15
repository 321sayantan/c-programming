// zig zag array
#include<stdio.h>
main()
{
	int n,t=0;
	printf("Enter the number of array");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the elements of the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	for(int i=0;i<n-1;i++)
	{
		if(i%2==0)
		{
			if(ar[i]>ar[i+1])
			{
			t=ar[i];
	        ar[i]=ar[i+1];
	        ar[i+1]=t;
	    }
		}
		else
		{
		t=ar[i+1];
	    ar[i+1]=ar[i];
	    ar[i]=t;
	}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",ar[i]);
	}
}
