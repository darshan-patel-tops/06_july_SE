#include<stdio.h>

main()
{
	
	int marks[2][2];

	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter number [%d][%d]\n",i,j);
			scanf("%d",&marks[i][j]);
		}
	}
	int marks1[2][2];
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter number [%d][%d]\n",i,j);
			
			scanf("%d",&marks1[i][j]);
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d \n",marks[i][j]+marks1[i][j]);
		}
		
	}
	
//	printf("Total is %d",total);
	
}