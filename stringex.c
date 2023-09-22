#include<stdio.h>
void main()
{
	char str[]="suraj";
	char *ptr=str;
	while(*ptr!='\0')
	{
		printf("%c\n",*ptr);
		ptr++;
	}
}
