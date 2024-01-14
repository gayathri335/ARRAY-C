#include<stdio.h>
int main()
{
	int n,i,index;
	int arr[100];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("\nenter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nenter the index to deleted:");
	scanf("%d",&index);
	if(index>n+1)
	{
		printf("\ndeletion is not possible");
	}
	else
	{
		for(i=index;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
