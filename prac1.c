#include<stdio.h>
void main()
{
	int i;
	int c=0;
	printf("Enter the age\n");
	int age;
	for(i=0;i<10;i++)
	{
		scanf("%d",&age);
		if (age>=50 && age<=60)
		{
			c=c+1;
		}
			
	}
	printf("%d No. of persons are between 50 to 60\n",c);
}
