#include<stdio.h>
int main()
{
	int n1,n2,n3,i;
	int a[100],b[100],c[100];
	printf("enter the size of first array:");
	scanf("%d",&n1);
	printf("enter the elements of first array:");
	//entering elements of first array
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the size of second array:");
	scanf("%d",&n2);
	printf("\nenter the elements of second array:");
	//entering elements of second array
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	n3=n1+n2;
	//copying the forst array to third array
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	//copying the second array to third array
	for(i=0;i<n2;i++)
	{
		c[i+n1]=b[i];
	}
	//printing the third array
	for(i=0;i<n3;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
	
}
