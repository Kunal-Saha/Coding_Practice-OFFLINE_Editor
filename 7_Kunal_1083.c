#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no. of rows\n");
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=(n-i);j>=1;j--)
		{
			printf(" ");
		}
		int printChar=1;
		int num=i;
		int den=1;
		for(k=0;k<=i;k++)
		{
			printf("%d",printChar);
			printChar=printChar*num;
			printChar=printChar/den;
			num--;
			den++;
		}
		printf("\n");
	}
	return 0;
}
	


