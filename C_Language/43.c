#include<stdio.h>

//it is such a type of function that calls itself
void print(int n)
{
	if(n>0)
	{
		printf("%d is the number \n",n);
		n--;
		print(n);
	}
	else
	{
		return 0;
	}
	
}


main()
{
	int number;
	printf("Enter how many times you want to use the recursive function \n");
	scanf("%d",&number);

	print(number);

}