#include<stdio.h>
void main()
{
	char a[50];
	int i;
	printf("Enter the string\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	if(a[i]>='A'&&a[i]<='Z')
	a[i]=a[i]+32;
	printf("After Convertion = %s",a);
}
