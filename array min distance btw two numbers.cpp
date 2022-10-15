#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b;
	int a_no[10], b_no[10],diff[10];
	int counta=0,z=0,countb=0;
	printf("Enter the number of array elements");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		printf("Enter the two numbers");
			scanf("%d",&a);
			scanf("%d",&b);
	
		for(int i=0;i<n;i++)
		{
			if(arr[i]==a)
			{
              a_no[counta]=i;
              counta++;
		}
		if(arr[i]==b)
			{
              b_no[countb]=i;
              countb++;
		
		}
	}


for(int i=0;i<counta;i++)
{
	for(int j=0;j<countb;j++)
	{
		diff[z]=abs(a_no[i]-b_no[j]);
		z++;
	}
}
int min=diff[0];
for(int i=0;i<z;i++)
	{
		if(min>diff[i])
		min=diff[i];
	}
	printf("The minimum distance btw two numbers is %d",min);
}
