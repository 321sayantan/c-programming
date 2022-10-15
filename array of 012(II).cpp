// sort an array of 0's, 1's and 2's
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number of array elements");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int t, cunt0 = 0, cunt1 = 0, cunt2 = 0;
    for(int i=0;i<n;i++)
	{
	   if(arr[i]==0)
	   cunt0++;
	   
	   else if(arr[i]==1)
	   cunt1++;
	   
	   else if(arr[i]==2)
	   cunt2++;
	   
	  else
	  continue;
	}
	//printf("%d%d%d",cunt0,cunt1,cunt2);
    int i=0;
	while (cunt0 > 0) {
            arr[i++] = 0;
            cunt0--;
        }
    while (cunt1 > 0) {
            arr[i++] = 1;
            cunt1--;
        }
    while (cunt2 > 0) {
            arr[i++] =2;
            cunt2--;
        }
        
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
