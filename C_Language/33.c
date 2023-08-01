#include<stdio.h>


int square()
{
	int a;
	printf("Enter side a :");
	scanf("%d",&a);
	return a*a;
	//function always return something
//	return printf("Area is parent: %d",a*a);
}


main()
{
	printf("Area is : %d ",square());
//square();
}