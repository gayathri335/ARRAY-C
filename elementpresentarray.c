#include<stdio.h>
int main()
{
	int arr[100];
	int n,x,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be checked:");
	scanf("%d",&x);
	int ispresent=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			ispresent=1;
			break;
		}
	}
	if(ispresent)
	{
		printf("\n%d is present in array",x);
	}
	else
	printf("\n%d is not present in array",x);
	return 0;
}
