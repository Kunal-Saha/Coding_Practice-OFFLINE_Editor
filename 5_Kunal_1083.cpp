#include<stdio.h>
int main()
{
	int i,j;
	char a[5]={'A','B','C','D','E'};
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");	
	}
	return 0;
	
}
