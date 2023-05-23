//AIM -->  Write a program for Selection Sort.

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,t=0;
	printf("Enter the size : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("After Sorting :\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
