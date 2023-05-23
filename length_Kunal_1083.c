#include<stdio.h>
void main()
{
	char a[50];
	int i,l=0;
	printf("Enter a String\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	
	printf("\nLength = %d",l);
	getch();
	
}
