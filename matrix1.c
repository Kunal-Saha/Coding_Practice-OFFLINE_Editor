#include<stdio.h>
void main()
{
	int i,j;
	int arr[3][3];
	printf("Enter the array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}
