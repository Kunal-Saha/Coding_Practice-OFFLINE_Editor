//AIM -->  Write a program for Bubble Sort.

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
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("After Sorting :\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
	

	
