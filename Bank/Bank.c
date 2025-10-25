#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("Welcome to Bank\n");
	printf("Enter Account number:");
	scanf("%d",&n);
	if(n>=10){
	   printf("Invalid account number");
	   return 0;
}
    int a=1000,amt;
	char str[5]="yes";
	printf("User Exists\n");
	while(strcmp(str,"yes")==0){
		printf("1.DEPOSIT\n2.WITHDRAW\n3.BALANCE ENQUIR\n0.EXIT\n");
		int ch;
		printf("Enter your choise:");
		scanf("%d",&ch);
		if(ch==1){
			printf("Enter amount to deposit:");
			scanf("%d",&amt);
			printf("\n");
			printf("Amount deposited successfully!\n");
			a+=amt;
			printf("Now your account balance is:%d\n",a);
		}
		else if(ch==2){
			printf("Enter amount to withdraw:");
			scanf("%d",&amt);
			a-=amt;
			printf("Amount withdrawn successfully!\n");
			printf("Now your account balance is:%d\n",a);
		}
		else if(ch==3){
		    printf("your account balance is:%d\n",a);
		}
		else if(ch==0){
	   		printf("Thanks for coming.Visit again!");
	   		return 0;
		}
		else
	   		printf("invalid choise.try again\n");

	printf("Do you want to perform another transaction?(yes/no):");
	scanf("%s",str);
}
	printf("Thank you for visiting");
	return 0;
}