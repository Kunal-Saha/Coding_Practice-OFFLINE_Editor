#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],s[20];
	int l,i,j,f=0;
	printf("Enter the string\n");
	gets(str);
	printf("Enter the word to be search\n");
	gets(s);
	for(i=0;str[i]='\0';++i)
	{
		f=0;
		for(j=0;s[j]=='\0';++j)
		{
			if(str[i+j]==s[j])
			{
			f=1;
			printf("%s is found in position - %d",s,i+1);
			break;
			}
		}
		
	}
	if(f==0)
	printf("%s Not found",s);
}
