#include<stdio.h>
void main()
{
	int n,i,sum=0,ld;
	printf("Enter the no for check\n");
	scanf("%d",&n);
	int p=n;
	while(n!=0)
	{
		ld=n%10;
		sum=sum+(ld*ld*ld);
		n=n/10;
	}
	if(sum == p)
	printf("\n%d is a Armstrong No",p);
	else
	printf("\n%d is Not a Armstong No",p);
}

