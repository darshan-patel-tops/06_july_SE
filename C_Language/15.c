#include<stdio.h>

main()
{
	int marks[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter Your marks %d \n",i+1);
		scanf("%d",&marks[i]);
		
	}
	for(int i=0;i<5;i++)
	{
	printf("marks of subject %d is %d \n",i+1,marks[i]);
	}		
}