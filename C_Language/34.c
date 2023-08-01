#include<stdio.h>
	int l,b;
	//Global Scope/Declaration

int area(int l,int b)
{

	return l*b;
}

main()
{	

	printf("Enter length :");
	scanf("%d",&l);
	printf("Enter bredth :");
	scanf("%d",&b);
	
	
	printf("%d",area(l,b));
}


