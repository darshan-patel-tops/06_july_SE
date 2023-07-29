#include<stdio.h>

//two types of function
// 1) user defined function
// 2) in-built function / system defined
	// 1) with parameter
	// 2) without parameter


main()
{
	int num1,num2;
	
	printf("Enter 2 numbers : \n");
	scanf("%d %d",&num1,&num2);
	
	add(num1,num2);  //parameter
}




int add(number1,number2)
{
	printf("total is %d",number1+number2);
}