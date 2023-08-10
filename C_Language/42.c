#include<stdio.h>


main()
{
	
	char name[5][50];
	
	
	for(int i=0;i<5;i++)
	{
		printf("Enter Name %d : \n",i+1);
		gets(name[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("Name %d is %s \n",i+1,name[i]);
	}
//	printf("%s",name[0]);
}