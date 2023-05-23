// AIM --> Write a Program for insertion sort.

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
	for(i=1;i<n;i++)
	{
		t=arr[i];
		j=i-1;
		while(arr[j]>t && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=t;
	}
	printf("After Sorting :\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
