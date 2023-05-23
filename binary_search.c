#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,c=0,num;
	printf("Enter the size : ");
	scanf("%d",&n);
	int l=0,u=(n-1),m=0;
	int arr[n];
	printf("Enter the numbers in Sorted format\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the search for number : ");
	scanf("%d",&num);
	while(l<=u)
	{
		m=(l+u)/2;
		if(arr[m]>num)
			u=m-1;
		else if(arr[m]<num)
			l=m+1;
		else
		{
			c++;
			break;
		}
	}
	if(c==1)
		printf("Element %d Found at Position : %d",num,m+1);
	else
		printf("Element not Found");
}
