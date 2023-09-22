#include<stdio.h>
void main()
{
	int choice,account_no,a,customer,deposit,withdraw,data,balance=100;
	char name[30];
	printf("Banking system menu\n");
	printf("enter 1 to display all the records\n");
	printf("enter 2 to search a record\n");
	printf("enter 3 to deposit amount:\n");
	printf("enter 4 to withdraw amount:\n");
	printf("enter 0 to exit:\n");
	printf("enter choice(0-4):");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Number of the customers records you want to enter?:\n");
			scanf("%d",&customer);
	        printf("enter data for records:\n");
	        scanf("%d",&data);
            printf("enter account no:\n");
            scanf("%d",&account_no);
	        printf("enter name:\n");
	        scanf("%c",&name);
	        break;
		case 2:
			printf("enter the account number to search:\n");
			scanf("%d",&account_no);
			printf("A/c Number %d:\n",account_no);
	        printf("Name:\n");
	        printf("Balance:%d",balance);
	        break;
	    case 3:
	    	printf("enter account number:\n");
	    	 scanf("%d",&account_no);
	    	printf("enter amount to deposit\n");
	    	scanf("%d",&deposit);
	    	break;
	    case 4:
	    	printf("enter account number:\n");
	    	 scanf("%d",&account_no);
	    	printf("enter amount to withdraw\n");
	    	scanf("%d",&withdraw);
	    	break;
	    case 0:
	       system("cls");
	       break;
	    default:
	       printf("Invalid output");
	    
	    	
	}
	
}
	

