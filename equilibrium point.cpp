//Equilibrium point
#include<stdio.h>
int main()
{
	int n,sum1=0,sum2=0,c=0;
	printf("Enter the number of elements in the array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in the array");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<i;j++)
	{
		sum1+=a[j];
	}
	for(int k=i+1;k<n;k++)
	{
		sum2+=a[k];
	}
	if(sum1==sum2)
{
	c++;
	printf("Equilibrium point is %d",i+1);
}
	sum1=0;
	sum2=0;
}
if(c==0)
printf("-1");
return(-1);
}

