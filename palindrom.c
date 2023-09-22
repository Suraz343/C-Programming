#include <stdio.h>
void palindrom(int);
void main(){
int num,n;
printf("enter the number:");
scanf("%d",&num);
palindrom(num);

}


void palindrom(int num){
    int rem,sum=0,n=num;
    while(num!=0){
        
    rem = num%10;
    sum = (sum*10)+rem;
    num = num/10;
    }
    if(sum==n){
        printf("the number is palindrom");
    }
    else{
        printf("The number is not palindrom");
    }
}
