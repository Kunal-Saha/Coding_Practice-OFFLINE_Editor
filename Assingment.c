#include<stdio.h>
int main()
{
	int n,m,i,j,k;
	int a[10][10],b[10][10],c[10][10];
	printf("Enter the no of rows and colume\n");
	scanf("%d%d",&m,&n);
	printf("Enter the nos in 1st array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the nos in 2nd array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][j]*b[i][j];
			}
		}
	}
	printf("After Multiplication\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
