//AIM -->  Write a program for linear search.

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,c=0,num;
	printf("Enter the size : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the search for number : ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==arr[i])
		{
			c++;
			printf("Element Found at position : %d\n",i+1);
			break;
		}
	}
	if(c==0)
		printf("Element Not Found");
}
