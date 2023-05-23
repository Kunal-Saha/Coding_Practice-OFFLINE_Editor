//AIM -->>Write a C program to implement 
  		//quick sort using divide and 
		//conquer method.(for array)

#include<stdio.h>

void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int partition(int arr[],int lb,int ub)
{
	int pivot= arr[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(arr[start]<=pivot)
			start++;
		while(arr[end]>pivot)
			end--;
		if(start<end)
			swap(&arr[start],&arr[end]);
	}
	swap(&arr[lb],&arr[end]);
	return end;
}
void quicksort(int arr[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc=partition(arr,lb,ub);
		quicksort(arr,lb,loc-1);
		quicksort(arr,loc+1,ub);
	}
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
int main()
{
	int n;
	printf("Enter the size : ");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("Enter the array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("After sorting :\n");
	display(arr,n);	
}

