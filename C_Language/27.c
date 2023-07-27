#include<stdio.h>

main()
{
	char name[100];
	char city[100];
	int age;
//	int marks;
	printf("enter your name \n");
//	scanf("%s",&name);
	gets(name); //it will take value with space
	printf("enter your age \n");
	scanf("%d",&age);
	printf("enter your City \n");
	gets(city); //it will take value with space
	
	printf("%s \n",name);
	printf("%d \n",age);
	printf("%s",city);
//	printf("%d",marks);
}