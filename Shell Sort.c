//AIM --> WAP to implement the Shell Sort

#include<stdio.h>
#include<stdlib.h>
void shell_sort(int a[],int n)
{
	int i,j,t,gap;
	for(gap=(n/2);gap>=1;gap/=2)
	{
		for(j=gap;j<n;j++)
		{
			for(i=j-gap;i>=0;i-=gap)
			{
				if(a[i+gap]>a[i])
					break;
				else
				{
					t=a[i];
					a[i]=a[i+gap];
					a[i+gap]=t;
				}
					
			}
		}
	}
}
int main()
{
	 int n,i;
	 printf("Enter the size : ");
	 scanf("%d",&n);
	 int a[n];
	 printf("Enter the values in array for sorting :\n");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 shell_sort(a,n);
	 printf("Sorted Array:\n");
	 for(i=0;i<n;i++)
	 	printf("%d ",a[i]);
	 return 0;
}
