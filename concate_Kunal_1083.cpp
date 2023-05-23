#include<stdio.h>
int main()
{
	char a[25],b[25];
	int i,l=0;
	printf("Enter the String\n");
	scanf("%s",a);
	printf("Enter the second String\n");
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;b[i]!='\0';i++)
	{
		a[l+i]=b[i];
	}
	a[l+i]='\0';
	printf("After concate = %s",a);
	return 0;
}
