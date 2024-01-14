#include<stdio.h>
int main()
{
	int arr[20];
	int i,min,n;
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	// finding the smallest element in array
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	printf("the smallest element in an array is: %d",min);
	return 0;
}
