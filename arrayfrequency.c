#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],f[100];
	int n,count,i,j;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i-1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		f[i]=-1; // initially setting the frequency to -1
	}
	for(i=1;i<=n;i++)
	{
		count=1;
		for(j=i+1;j<=n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		{
			f[i]=count;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(f[i]!=0)
		{
			printf("\n%d occurs %d times",arr[i],f[i]);
		}
	}
	return 0;
	
}
