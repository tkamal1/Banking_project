
/* Devlope by Tridib kamal
   CSE studant 2rd year
   --------:Banking application using C Language:----------
*/

#include<stdio.h>
#include<stdlib.h>

struct create{
	
	char name[10];
	char surname[10];
	int aadhar;
	char pan[11];
	char dob[10];
	long long int opbal;
	
} appli;
//account creating 
int create()
{

	appli.name;
	appli.surname;
	appli.aadhar;
	appli.pan;
	appli.dob;
	appli.opbal;

	printf("\n\nEnter your good mane:-");
	scanf("%s",appli.name);
	printf("\nEnter your surmane:-");
	scanf("%s",appli.surname);
	printf("\nEnter your Aadhar no:-");
	scanf("%d",&appli.aadhar);
	printf("\nEnter your Pan Card no:-");
	scanf("%s",appli.pan);
	printf("\nEnter your lucky D.O.B:-");
	scanf("%s",appli.dob);
	mainBalance();

}
// Main Balance 
int mainBalance()
{
		printf("\nEnter your Opening Balence(minimum-1000):-");
	scanf("%ld",&appli.opbal);
	if(1000<=appli.opbal)
	{
		printf("\n Your name:%s",appli.name);
		printf("\n Your surname:%s",appli.surname);
		printf("\n Your Aadhar no:%d",appli.aadhar);
		printf("\n Your Pan no:%s",appli.pan);
		printf("\n Your D.O.B:%s",appli.dob);
		printf("\nyour Opening Balence is :-%ld",appli.opbal);
		printf("\nLogin your account and check Others option:-");
		printf("\n Press 2 Login options :-");
		switchfun();
	}
	else
	{
		printf("\n As per instructions Please enter Above Amount (1000)");
		mainBalance();	
	}
}

struct loginver{
	
	char name[10];
	char surname[10];
	int aadhar;

} lgin;

//Login part 
int login()
{
	
	lgin.name;
	lgin.surname;
	lgin.aadhar;
	
	printf("\n\nEnter your good mane:-");
	scanf("%s",lgin.name);
	printf("\nEnter your surmane:-");
	scanf("%s",lgin.surname);
	printf("\nEnter your Aadhar no:-");
	scanf("%d",&lgin.aadhar);

	if(appli.aadhar == lgin.aadhar)
	{
			printf("\nlogin Successful:-");
			printf("\nYou Can Choose 3 for Withdraw:-");
			printf("\nYou Can Choose 4 for Deposit:-");
			printf("\nYou Can Choose 5 for Balance Check:-");
			printf("\nYou Can Choose 0 for exit:-");
			switchfun2();
			
	}
	else
	{
		printf("\nlogin Failed Try again:-");
		switchfun();
	}
	
}

struct Withdr
{
	long long int amount;
	long long int avelable;
	char name[10];
	char surname[10];
	char aadhar[11];
	
		
}wi;
 //Withdraw part 
int Withdraw()
{
	wi.avelable; 
	wi.amount;
	wi.name;
	wi.surname;
	wi.aadhar;
	printf("\n\nEnter your good mane:-");
	scanf("%s",wi.name);
	printf("\nEnter your surmane:-");
	scanf("%s",wi.surname);
	printf("\nEnter your Aadhar no:-");
	scanf("%s",wi.aadhar);
	printf("\nEnter your Withdraw Amount:-");
	scanf("%ld",&wi.amount);
	appli.opbal=appli.opbal-wi.amount;
	printf("\nNow your Balance is :-%ld",appli.opbal);
	
	printf("\nYou Can Choose 3 for Withdraw:-");
	printf("\nYou Can Choose 4 for Deposit:-");
	printf("\nYou Can Choose 5 for Balance Check:-");
	printf("\nYou Can Choose 0 for exit:-");
	switchfun2();
	
		
}

struct depo
{
	char name[10];
	char surname[10];
	char aadhar[11];
	long long int amount;

}de;
//Deposit part
int deposit()
{
	 
	de.name;
	de.surname;
	de.aadhar;
	de.amount;
	appli.opbal;
	printf("\n\nEnter your good mane:-");
	scanf("%s",de.name);
	printf("\nEnter your surmane:-");
	scanf("%s",de.surname);
	printf("\nEnter your Aadhar no:-");
	scanf("%s",de.aadhar);
	printf("\nEnter your Deposit Amount:-");
	scanf("%ld",&de.amount);
	
	appli.opbal=appli.opbal+de.amount;
	printf("\nYour balance is:-%ld",appli.opbal);
	
	printf("\nYou Can Choose 3 for Withdraw:-");
	printf("\nYou Can Choose 4 for Deposit:-");
	printf("\nYou Can Choose 5 for Balance Check:-");
	printf("\nYou Can Choose 0 for exit:-");
	switchfun2();

}
//Balance Check part
int balance()
{

	appli.opbal;
	
	printf("\nYour Balance is:-%ld",appli.opbal);
	printf("\nYou Can Choose 3 for Withdraw:-");
	printf("\nYou Can Choose 4 for Deposit:-");
	printf("\nYou Can Choose 5 for Balance Check:-");
	printf("\nYou Can Choose 0 for exit:-");
	switchfun2();	
	
}
//Create and login function part
int switchfun()
{
	int number;
	printf("\n\nEnter your Choose  to continue:--");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("\nYour Choose Creating account:--\n");
			create();
			break;
		case 2:
			printf("\nYour Choose Login:--\n");
			login();
			break;	
		default:
		printf("\nwrong option !!");	
	}
}
// Withdraw Deposit and Balance Check function
int switchfun2()
{
	int number;
	printf("\n\nEnter your Choose  to continue:--");
	scanf("%d",&number);
	if(number!=0)
	{
			switch(number)
		{
			case 3:
				printf("\nYour Choose Withdraw:--\n");
				Withdraw();
				break;
			case 4:
				printf("\nYour Choose deposit:--\n");
				deposit();
				break;
			case 5:
				printf("\nYour Choose balance check:--\n");
				balance();
				break;	
			default:
				printf("Wrong choice !!");	
			    break;
		}
	}
	
}
//Main function 
int main()
{
	//welcome part 
	printf("\t\t--:Banking Application:--");
	printf("\n\t\t--:WELCOME TO  TK BANK:--");
	printf("\n\t\t--:OUR SERVICE LIST:--");
	printf("\n\n\n--:1)Creating account:--");
	printf("\n\t\t\t--:2)login:--");
	printf("\n--:3)Withdraw Money:--");
	printf("\n\t\t\t--:4)Deposit Money:--");
	printf("\n--:5)balance check:--\n");
	printf("\n--:Choose any one to continue:--\n");
	printf("\nNEW USER PLEASE CREATE ACCOUNT FIRST:--");
	printf("\n Press 1 to create account:-");
	
	switchfun(); 

	return 0;
}
