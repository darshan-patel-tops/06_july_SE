#include<stdio.h>

main()
{
	for(int i=0;i<=4;i++)
	{
	
		for(int k=5;k>=i;k--)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		
	}
	
	for(int i=0;i<=5;i++)
	{
		for(int k=0;k<=i;k++)
		{
			printf(" ");
		}	
		for(int j=5;j>=i;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
}