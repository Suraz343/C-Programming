// Online C compiler to run C program online
#include <stdio.h>
int main() {
int sum,difference,product,division,modular;
char a;
int b,c;
printf("you can perform these operation in this program\naddition\nsubtraction\nmultiplication\ndivision\nmodular division\n");
printf("Note:enter the symbols of these operation like +,-,*,/,% respectively\n");
scanf("%s",&a);
if(a=='+')
{
    printf("enter your first number \n second number : ");
    scanf("%d %d",&b,&c);
    sum=b+c;
    printf("the sum of %d and %d is %d",b,c,sum);
}
else if(a=='-')
{
    printf("enter your first number \n second number : ");
    scanf("%d %d",&b,&c);
    difference=b-c;
    printf("the difffernce of %d and %d is %d",b,c,difference); 
}
else if(a=='*')
{
     printf("enter your first number \n second number : ");
    scanf("%d %d",&b,&c);
    product=b*c;
    printf("the product of %d and %d is %d",b,c,product);
}
else if(a=='/')
{
     printf("enter your first number \n second number : ");
    scanf("%d %d",&b,&c);
    division=b/c;
    printf("the division of %d and %d is %d",b,c,division);
}
else if(a=='%')
{
     printf("enter your first number \n second number : ");
    scanf("%d %d",&b,&c);
    modular=b%c;
    printf("the remainder when   %d is divided by %d is %d ",b,c,modular);
}
else
{
    printf("you entered the invalid input");
}
    
    return 0;
}
