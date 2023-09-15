#include<stdio.h>

main()
{
	char name[100];
	char location[100];
	int age;
	
	printf("Enter name :");
	gets(name);
	printf("Enter age :");
	scanf("%d",&age);
	
	fflush(stdin);
	printf("Enter location :");
	gets(location);
	
}