#include<stdio.h>
struct personal{
		char name[20];
		int date;
		char month[20];
		int year;
		int sal;
	}person1;
void main()
{
	printf("Enter teh name,date,month,year,salary\n");
	scanf("%s%d%s%d%d",person1.name,&person1.date,person1.month,&person1.year,&person1.sal);
	printf("Personal Details is :\nName : %s\nDate of Joining : %d %s %d\nSalary : %d",person1.name,person1.date,person1.month,person1.year,person1.sal);
}
