#include<stdio.h>
void main()
{
	int i,j,n,sum=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum = 0;
		for(j=1;j<=i;j++)
		{
			sum = sum+j;
			printf("%d",j);
			if(j==i)
			{
				printf("=%d",sum);
			}
			else
			printf("+");
		}
		printf("\n");
	}
}
