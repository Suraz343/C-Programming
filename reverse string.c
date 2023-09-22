// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>

int main() {
    char text[50];
    printf("enter the text:");
    gets(text);
    strrev(text);
    printf("the reverse of the entered string is:");
    puts(text);
    return 0;
}
