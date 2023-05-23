#include<stdio.h>
void main()
{
	int totrow,currow,curcol,c=0;
	printf("No of want to print\n");
	scanf("%d",&totrow);
	for(currow=1;currow<=totrow;currow++)
	{
		for(curcol=1;curcol<=currow;curcol++)
		{
			printf("%d",c);
			c++;
			printf("\t");
		}
		printf("\n");
	}
	
}
