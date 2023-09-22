#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[30];
	float salary;
};
void main()
{
	struct employee e1,e2,e3;
	printf("enter the id of the e1");
	scanf("%d",&e1.id);
	printf("enter the name of the e1");
	scanf("%s",e1.name);
	printf("enter the salary of the e1");
	scanf("%f",&e1.salary);
	
	printf("enter the id of the e2");
	scanf("%d",&e2.id);
	printf("enter the name of the e2");
	scanf("%s",e2.name);
	printf("enter the salary of the e2");
	scanf("%f",&e2.salary);
	
	printf("enter the id of the e3");
	scanf("%d",&e3.id);
	printf("enter the name of the e3");
	scanf("%s",e3.name);
	printf("enter the salary of the e3");
	scanf("%f",&e3.salary);
	
	printf(" the details of the first employee is %d %s %f",e1.id,e1.name,e1.salary);
}
