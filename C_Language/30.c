#include<stdio.h>

int sub()
{
	printf("Enter number 1: ");
	int num1,num2;
	scanf("%d",&num1);
	printf("Enter number 2: ");
	scanf("%d",&num2);
	printf("Total is : %d \n",num1-num2);
	
//	main();
}
main()
{
	sub();
	add();
}

int add()
{
	int num1,num2;
	printf("Enter number 1: ");
	scanf("%d",&num1);
	printf("Enter number 2: ");
	scanf("%d",&num2);
	printf("Total is : %d \n",num1+num2);
}