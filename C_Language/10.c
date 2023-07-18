#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter year \n");
	scanf("%d",&year);
	
	if(year%100 == 0 && year%400 == 0 && year%4 == 0 )
	{
					printf("a leap year \n");
	}
	else
	{
			printf("not a leap year \n");	
	}
}