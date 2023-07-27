#include<stdio.h>

main()
{
	
	int marks[5];
	int total=0;
	for(int i=0;i<5;i++)
	{
		printf("Enter your marks \n");
		scanf("%d",&marks[i]);
		total = total+ marks[i];
	}
	printf("total is %d",total);
}