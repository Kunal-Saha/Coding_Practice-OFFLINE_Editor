#include<stdio.h>
void main()
{
	char a[50],b[50];
	int i;
	printf("Enter the string\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("After Copy = %s",b);
}
	
