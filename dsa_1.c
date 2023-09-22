#include<stdio.h>
void traverse(int[],int);
 void deletion(int[],int,int);
void main()
{
	int a[20],num,counter,i;
	printf("Choose which operation you want to perform:\n 1.Traversing\n 2.Insertion\n 3.Selection\n 4.Deletion\n 5.Searchig\n 6.Sorting\n");
	printf("enter the number of element you want to insert:");
	scanf("%d",&num);
	printf("enter the elements that you want to insert:\n");
	for(counter=0;counter<num;counter++)
	{
	    scanf("%d",&a[counter]);
	}
	traverse(a,num);
	deletion(a,num,i);
	}
	void traverse(int a[],int num)
	{
	    int i=0;
	    while(i<num)
	    {
	        printf("%d\t",a[i]);
	        i++;
	        }
	}
 	void deletion(int a[],int num,int loc)
 	{
 	    int a[20],num,loc,deleted_number;
 	    printf("which element you want to delete");
 	    scanf("%d",&loc);
 	    deleted_number=a[loc];
 	    for(int i=loc;i<=num-1;i++)
 	    {
 	    	a[i]=a[i+1];
 	    	
		 }
		 traverse(a,num);
	    printf("deleted number is %d",deleted_number);
	   
	    
 	}
