#include<stdio.h>
int main()
{
	int marks;
	
	printf("enter marks: ");
	scanf("%d",&marks);
	
	
	if(marks<33)
	{
		printf("fail");
	}
	else
	{
		printf("pass");
	}
}