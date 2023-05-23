//AIM -->  Write a program for Merge Sort[using Array].

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter the size : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n = sizeof(arr) / sizeof(arr[0]);
	merge_sort(arr,0,n-1);
	printf("Sorted array: \n");
  	display(arr,n);
  	return;
}
int merge_sort(int arr[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		merge_sort(arr,l,mid);
		merge_sort(arr,mid+1,r);
		merge(arr,l,mid,r);	
	}
	return 0;
}
int merge(int list[],int low,int mid,int high)
{
	int i, mi, k, lo, temp[50];
 
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (list[lo] <= list[mi])
        {
            temp[i] = list[lo];
            lo++;
        }
        else
        {
            temp[i] = list[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = list[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = list[k];
             i++;
        }
    }
 
    for (k = low; k <= high; k++)
    {
        list[k] = temp[k];
    }
}
int display(int arr[],int n)
{
	int i;
	for(i = 0; i <n; i++)
    	printf("%d ", arr[i]);
  	printf("\n");
  	return 0;
}
	
