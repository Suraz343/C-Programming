#include<stdio.h>
void swap(int *a,int *b);
int main()
{
int a=15,b=12;
printf("the value of the a and b before swap is %d and %d\n",a,b);
swap(&a,&b);
printf("the value of a and b after swap is %d and %d",a,b);
return 0;	
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
