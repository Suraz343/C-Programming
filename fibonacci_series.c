// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n,a=0,b=1;
    int next_num=a+b;
    printf("enter the number upto which you want the fibonacci series:");
    scanf("%d",&n);
    printf("fibonacci series:-%d, %d, ",a,b);
    for (i=3;i<=n;i++)
    {
        printf("%d , ",next_num);
        a=b;
        b=next_num;
        next_num=a+b;
        next_num=a+b;


    }
    
    return 0;
} 
