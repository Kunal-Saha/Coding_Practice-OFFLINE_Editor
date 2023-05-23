#include<stdio.h>
void main()
{
	char a[25],b[25];
	int i,l=0;
	printf("Enter the string\n");
	scanf("%s",a);
	printf("Enter the second string\n");
	scanf("%s",b);
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	if(a[i]!=b[i])
	break;
	printf("Comparision Result = %d",a[i]-b[i]);
	
}
