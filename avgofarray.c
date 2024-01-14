#include<stdio.h>
int main()
{
	int arr[100];
	int n,i;
	float sum=0;
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
	printf("the average of array is %.2f",sum/n);
	return 0;
}
