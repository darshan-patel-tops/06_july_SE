#include<stdio.h>

main()

{
	for(int i=0;i<5;i++)
	{
		for(int j=5;j>i;j--)
		{
			printf("  ");
		}
		for(int k=0;k<i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}