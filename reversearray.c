#include<stdio.h>
int main()
{
	int arr[100];
	int i,j,temp,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
	j=n-1;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
	
}
