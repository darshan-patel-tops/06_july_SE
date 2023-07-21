#include<stdio.h>

main()
{
	
	/*
	datatype	datatype	result 
	int 		int 		int
	int 		float		int
	float 		float 		float
	
	*/
	
	char name[20];
	float marks[5];
	float total=0;
	
//	printf("Enter your name \n");
//	scanf("%s",&name);
	
	for(int i=0;i<5;i++)
	{
		printf("Enter your marks of %d \n",i+1);
		scanf("%f",&marks[i]);
		total = total + marks[i];
	}
	printf(" \n\n %f \n\n",total);
	float percentage=0;
	
	
	percentage = (total/500) * 100;
	printf("%f",percentage);
	
	if(percentage >= 0 && percentage<=33)
	{
		printf("Fail \n");
	}
	else if(percentage >= 34 && percentage<=50)
	{
		printf("pass \n");
	}
	else if(percentage >= 51 && percentage<=80)
	{
		printf("first class\n");
	}
	else if(percentage >= 81 && percentage<=100)
	{
		printf("distinction \n");
	}
	else
	{
		printf("apsara wala \n");
	}
}