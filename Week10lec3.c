#include<stdio.h>
#include<String.h>
int fac(int);
int a;
void main()
{
	int i,f=0,n;
	char list[5][20]={"Ayush","Kunal","Misti","Wizard","Roy"};
	char name[20];
	printf("Enter Search name");
	gets(name);
	for(i=0;i<5;i++)
	{
		if(strcmp(list[i],name)==0)
		{
		
			f=1;
			break;
		}
			
		
	}
	if(f==1)
	{
		printf("%s is found in list",name);
		printf("Enter the no. for factorial");
		scanf("%d",&n);
		printf("Factorial of %d is %n",n,fac(n));
	}
	else
	printf("Sorry,%s is not found in list",name);
}
int fac(int a)
{
	if(a==1)
	return 1;
	else
	return (a*fac(a-1));
}

