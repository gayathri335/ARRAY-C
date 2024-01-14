#include<stdio.h>
int main()
{
	int arr[10];
	int n,i,min,max;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=max=arr[0];
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("%d is the minimum number",min);
	printf("%d is the maximum number",max);
	return 0;
}
