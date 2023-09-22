#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	printf("enter the 3rd number");
	scanf("%d",&c);
	if(a>b && b<c)
		printf("the greatest number is %d",a);
		if(b>c && b>a)
		printf("the greatest number is %d",b)
	else
	printf("the greatest number is %d",c);
}

