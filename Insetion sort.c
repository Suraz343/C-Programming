#include<stdio.h>
void main(){
    int count =0;
    int a[50],key,n,j;
    printf("Enter how many elements you want to enter:");
    scanf("%d",&n);
    printf("Enter the elements now:");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
       }
    printf("The elements of the array before sorting are:\n");
    for(int i=0;i<n;i++){
       printf("%d\t",a[i]);
          }
          
    for(int i=1;i<n;i++){
        count=count+1;
        key=a[i];
        count=count+1;
        j=i-1;
        count=count+1;
        
        
        while(j>-1 && a[j]>key){
            count=count+1;
            a[j+1]=a[j];
            count=count+1;
            j--;
            count=count+1;
        }
        count=count+1;
        a[j+1]=key;
        count=count+1;
    }
    count=count+1;
    printf("\nThe elements after insertion sort are:\n");
    for(int x=0;x<n;x++){
        printf("%d\t",a[x]);
    }
    
    printf("\nThe no of step in insertion sort:- %d", count);
        }
