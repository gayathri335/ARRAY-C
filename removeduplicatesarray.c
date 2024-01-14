#include<stdio.h>
int main()
{
	int arr[100];
	int n,i,j,count=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
