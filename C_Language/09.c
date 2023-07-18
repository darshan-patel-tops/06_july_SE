#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks \n");
	scanf("%d",&marks);
	
	switch(marks/10)
	{
		case 10:
		case 9:
			printf("a++ \n");
			break;
		case 8:
			printf("a+ \n");
			break;
		
		default:
		printf("invalid marks \n");		
	}
	
}
