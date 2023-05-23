//AIM --> Write a program to implement Radix sort.

#include<stdio.h>
int getMax(int a[], int n) 
{
	int i; 
    int mx = a[0]; 
    for(i = 1; i < n; i++) 
    	if (a[i] > mx) 
            mx = a[i]; 
    return mx; 
} 
void CountSort(int a[],int n,int pos)
{
	int i,j;
	int count[10]={0};
	int b[n];
	for(i=0;i<n;i++)
		++count[(a[i]/pos)%10];
	for(i=1;i<=10;i++)
		count[i]+=count[i-1];
	for(j=n-1;j>=0;j--)
		b[--count[((a[j]/pos)%10)]]=a[j];
	for(i=0;i<n;i++)
		a[i]=b[i];		
}
void RadixSort(int a[],int n)
{
	int pos;
	int max=getMax(a,n);
	for(pos=1;(max/pos)>0;pos=pos*10)
		CountSort(a,n,pos);
}
Display(int a[],int n)
{
	printf("\nSorted Array\n");
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
int main()
{
	int n,i;
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the nos :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	RadixSort(a,n);
	Display(a,n);
	return 0;
}
