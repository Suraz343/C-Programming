#include<stdio.h>
int main(){
    int arr[40],item,num,f=0;
    printf("Enter how many elements you want to enter:");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter which element you want to search:");
    scanf("%d",&item);
    for(int n=0;n<num;n++){
        if(arr[n]==item){
            printf("the element is found at index %d",n);
            f=1;
        }
    }  
    
    if(f!=1){
        printf("the element is not found in the list");
    
    }
}
