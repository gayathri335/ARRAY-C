#include<stdio.h>
int main()
{
	int arr[10];
	int n,i,j,temp;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//sorting the array
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	//printing the largest element in an array
	printf("\nlargest element is: %d",arr[n-1]);
	//printing smallest element of array
	printf("\nsmallest element is : %d",arr[0]);
	return 0;
}
