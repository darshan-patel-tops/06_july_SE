#include<stdio.h>

main()
{
	
	static int i=0;
	
//	int i=0;
	for(i=0;i<5;i++)
	{
		printf("value is %d \n",i);
	}
	
	printf("\n\n %d ",i);
	
}