//Binary Search
#include<stdio.h>

int main()
{
	int n,k,mid,first=0;
	int arr[10];
	printf("Enter the number of elements in an array");
	scanf("%d",&n);
	int last=n;
	printf("Enter the elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key");
	scanf("%d",&k);
	 mid=(first+last)/2;
        while(first<=last)
        {
            if(arr[mid]<k)
            {
                first=mid+1;
            }
            else if(arr[mid]==k)
            {
                printf("%d",mid);
                break;
            }
            else
            {
                last=mid-1;
            }

            mid=(first+last)/2;
        }
        if ( first > last )
          return -1;

	}

