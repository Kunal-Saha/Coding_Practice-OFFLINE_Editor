#include<stdio.h>
void main()
{
	int l,b,arrec,perirec;
	float r,arcir,circir;
	printf("Enter for rec\n");
	scanf("%d%d",&l,&b);
	printf("Enter the cir\n");
	scanf("%f",&r);
	arrec=l*b;
	perirec=2*(l+b);
	circir=2*3.14*r;
	arcir=3.14*(r*r);
	printf("%d\n%d\n",arrec,perirec);
	printf("%f\n%f\n",circir,arcir);
}
	

