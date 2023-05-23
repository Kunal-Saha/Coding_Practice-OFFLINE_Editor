#include<stdio.h>
void main()
{
	int totalrow=5;
	int row,colspace,colstar,i;
	for(i=1;i<=2*totalrow-1;i++)
	{
		printf("*");
	}
	printf("\n");
	for(row=1;row<=totalrow;row++)
	{
		for(colspace=totalrow-row;colspace>=1;colspace--)
		{
			printf("*");
		}
		for(colstar=1;colstar<=2*row-1;colstar++)
		{
			printf(" ");
		}
		for(colspace=totalrow-row;colspace>=1;colspace--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(row=totalrow-1;row>=1;row--)
	{
		for(colspace=1;colspace<=totalrow-row;colspace++)
		{
			printf("*");
		}
		for(colstar=1;colstar<=2*row-1;colstar++)
		{
			printf(" ");
		}
		for(colspace=1;colspace<=totalrow-row;colspace++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=2*totalrow-1;i++)
	{
		printf("*");
	}
	printf("\n");
}
