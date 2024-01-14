#include<stdio.h>
int main()
{
	int n,tar,i,sum;
	int arr[100];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("\nenter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nenter the target:");
	scanf("%d",&tar);
	for(i=0;i<n;i++)
	{
		sum=(i+tar)%n;
		printf("%d ",arr[sum]);
	}
	return 0;
}
