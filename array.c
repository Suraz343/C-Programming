#include<stdio.h>
void main()
{
	int marks[3],int i;
	for(i=0; i<4; i++)
	{
	printf("enter the marks of subjet %d",i+1);
	scanf("%d",&marks[i]);	
	}
	for(i=0; i<4; i++)
	{
		printf("the marks of the subject %d is",i+1,marks[i]);
	}
	
	
}
