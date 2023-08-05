#include<stdio.h>

apple()
{
	int stock=5;
	int choice,quantity;
	printf("1 iphone 14\n");
	printf("2 iphone 15\n");
	scanf("%d",&choice);
	
//	if(quantity>stock)
//	{
//		printf("we don't have that much stock")
//	}
//	else
//	{
//		if()
//	}
	
	
	if(choice==1)
	{
		char buy; 
		printf("price is: 100000\n");
		printf("you wanna buy???? answer with y or n\n");
		
		scanf(" %c",&buy);
		if(buy == 'y' || buy == 'Y')
		{
			printf("Really???");
			printf("1 Card \n");
			printf("2 rokde \n");
			printf("3 upi\n");
			char payment;
			scanf(" %c",&payment);
			if(payment=='c'||payment=='C')
			{
				printf("Your total is : 100000 and you made the payment with card\n");
				printf("Thank you for shopping with us\n");
			}
			else
			{
				printf("Enter valid choice");
			}
		}
		
		
	}
}



basic()
{
 char name[10];
// int contact;
 int age;
 
	
 printf("enter your name:\n");
	gets(name);
 printf("enter your age:\n");
 scanf("%d",&age);
// printf("enter your contact:\n");
// scanf("%d",&contact);
 	int choice;
	printf("1 Apple \n"); 
	printf("2 samsung \n"); 
	printf("3 redmi \n"); 
 	scanf("%d",&choice);
 	if(choice==1)
 	{
 		apple();
	 }
	else if(choice ==2)
	{
//		samsung();
	}
	else if(choice ==3)
	{
//		redmi();
	}
	else
	{
		printf("enter valid choice");
	}
}





main()
{
	basic();
	
	
}