//Function Prototype
int searching(int [ ],int,int);
int sum_of_elements(int[],int);
void insertion(int [ ], int, int, int);
int deletion (int [ ], int,int);
void traverse(int [ ], int);
#include <stdio.h>
int main()
{
int arr[50], num, i, Index, element, choice_num=1,searchIndex,total;
printf("Enter how many elements you want to insert in the Array:");
scanf("%d",&num);
printf("Now enter your %d elements:\n",num);
for(i=0;i<=num-1;i++)
scanf("%d",&arr[i]);
printf("The original array elements are :\n");
traverse(arr,num);
while(choice_num==1)
{
printf("\nChoose which operation you want to perform:\n 1.Searching\n 2.Traversing\n 3.Sum of all elements \n 4.Insertion \n 5.Deletion \n Enter here:");
scanf("%d",&choice_num);
switch(choice_num)
{
case 4:
printf("Enter the element which you want to insert in this array: ");
scanf("%d", &element);
printf("Enter the Index where you want to insert the element:");
scanf("%d", &Index);
insertion(arr, num, element, Index);//Function Call
num=num+1;
printf("The array after insertion one element is:\n");
traverse(arr,num);
break;
case 5:
// Program 1: 2
printf("Enter the index from where you want to delete: ");
scanf("%d", &Index);
element=deletion(arr, num, Index);//Function Call
num=num-1;
printf("The array after deletion of element %d is:\n",arr[Index]);
traverse(arr,num);
printf("\nThe deleted element is %d\n",element);
break;
case 2:
traverse(arr,num);
break;
case 1:
printf("which element you want to search:");
scanf("%d",&element);
searchIndex = searching(arr,num,element);
printf("The element %d was found at index %d",element ,searchIndex);
break; 
case 3:
total=sum_of_elements(arr,num);
printf("The sum of all the elements of the array is :%d",total);
}
//End of Switch
printf("\nIf you want to continue Press 1 otherwise press 0 to exit:");
scanf("%d",&choice_num);
}//End of while
return 0;
}//End of Main
int deletion (int A[ ], int n, int Pos)//Function Definition
{
int i, Item;
Item= A[Pos];
for(i=Pos+1;i<=n-1;i++)
A[i-1]=A[i];
return(Item);
}

void traverse(int A[ ], int N)//Function Definition
{
int i=0;
while(i<=N-1)
{
printf("%d\t ", A[i]);
i=i+1;
}
}
void insertion (int A[ ], int n, int Element, int Pos)//Function Definition
{

// Program 1: 3
int i;
for(i=n-1;i>=Pos;i--)
A[i+1]=A[i];
A [Pos] = Element;
}
int searching(int arr[],int num,int element)
{
    for(int i=0;i<num;i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
       
    }
     return -1;
}
int sum_of_elements(int arr[],int num)
{
    int sum =0;
    for(int i=0;i<num;i++)
    {
        sum += arr[i];
    }
    return sum;
}
