#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter 2 numbers \n");
	scanf("%d %d",&a,&b);
	char choice;
	printf("enter you choice\n");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		case '%':
			printf("%d",a%b);
			break;
			default:
			printf("%d \n",a+b);
			printf("%d \n",a-b);
			printf("%d \n",a/b);
			printf("%d \n",a%b);
			printf("%d \n",a*b);
	}
	
	
	
}