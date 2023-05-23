//AIM --> Given an array of both positive and negative integers, 
//        the task is to compute sum of minimum and maximum elements of all sub-array of size k.


#include <stdio.h>
#include <stdlib.h>
 
void printKMax(int arr[], int n, int k)
{
    int j,i, max,Sum=0,min;
 
    for(i = 0; i <= n - k; i++)
	{
        max = arr[i];
 		min = arr[i];
        for (j = 1; j < k; j++)
		{
            if (arr[i + j] > max)
                max = arr[i + j];
            if (arr[i+j]< min)
            	min = arr[i+j];
        }
        Sum=Sum+(min+max);
    }
    printf("\nOUTPUT :");
    printf("%d",Sum);
}
 
int main()
{
	int n,k,i;
    printf("\nEnter the array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array elements\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("\nEnter the subarray size\n");
	scanf("%d",&k);
    printKMax(arr, n, k);
    return 0;
}
