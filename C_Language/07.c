#include<stdio.h>
int main()
{
	
	/*
	
	switch(condition)
	{
		case :
		statement;
		break;
		
		default:
		statement;
	}
	
	
	*/
	
	
	int days;
	
	printf("enter a number \n");
	scanf("%d",&days);	
	
	switch(days)
	{
		case 1:
			printf("monday \n");
			break;
		case 2:
			printf("Tuesday \n");
			break;
		case 3:
			printf("Wednesday \n");
			break;
		case 4:
			printf("thursday \n");
			break;
		case 5:
			printf("friday \n");
			break;
		case 6:
			printf("saturday \n");
			break;
		case 7:
			printf("sunday \n");
			break;
		default :
			printf("invalid day \n");
	}
	
}