/**Given a number N, complete the following tasks,
Task 1. Generate a new number from N by changing the zeroes in the binary representation of N to 1.
Task  2. Find the difference between N and the newly generated number.**/
#include<stdio.h>
#include<math.h>

int main()
{
	int n,m,a,j,z=0,sum=0,i=0;
	int arr[30];
	printf("Enter the number");
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		a=m%2;
		arr[i]=a;
		i++;
		m=m/2;
	}
	printf("The binary of %d is ",n);
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	for(int j=0;j<i;j++)
	{
		if(arr[j]==0)
		{
			arr[j]=1;
		}
	}
	for(int j=i-1;j>=0;j--)
	{
		sum=sum+ (arr[j]*pow(2,z));
		z++;
        }
			printf("\nsum of all the 1's is %d",sum);
			printf("\nThe difference of the two number is %d",sum-n);
			
			}
