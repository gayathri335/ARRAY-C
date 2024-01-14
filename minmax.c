#include<stdio.h>
int main()
{
	int arr[10];
	int n,i,min;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[n]);
	}
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>min)
		{
			min=arr[i];
		}	
	}
	printf("%d",min);
	return 0;
}
