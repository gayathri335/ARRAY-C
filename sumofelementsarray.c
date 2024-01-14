#include<stdio.h>
int main()
{
	int arr[100];
	int n,i,sum=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("the sum of array is %d",sum);
	return 0;
}
