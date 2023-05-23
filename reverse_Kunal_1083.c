#include<stdio.h>
int main()
{
	char a[50],temp;
	int i,j,l=0;
	printf("Enter the String\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	i=0;
	j=l-1;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("Reverse String = %s",a);
	return 0;
}
