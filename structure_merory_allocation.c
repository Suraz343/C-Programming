#include<stdio.h>
#include<stdlib.h>

struct myArray{
	int total_size;
	int used_size;
	int *ptr;
};
void createArray(struct myArray*a,int tsize,int uSize)
{
//	(*a).total_size=tsize;
//	(*a).used_size=uSize;
//	(*a).ptr = (int *)malloc(tsize*sizeof(int));
	a->total_size=tsize;
	a->used_size=uSize;
	a->ptr = (int *)malloc(tsize*sizeof(int));
	
}
void show(struct myArray *a){
	for(int i=0;i<a->used_size;i++){
		printf("%d\n",(a->ptr)[i]);
		
	}
}
void setval(struct myArray *a){
	int n;
	for(int i=0;i<a->used_size;i++){
		printf("enter elements %d",i);
		scanf("%d",&n);
		(a->ptr)[i] =n;
	}
}
void main()
{
 struct myArray marks;
 createArray(&marks,100,20);
 setval(&marks);
 show(&marks);
 
}
