#include<stdio.h>

int main()
{
	int marks[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter marks of student no %d \n",i+1);
		scanf("%d",&marks[i]);
	}
	//marks[3]
	for(int j=0;j<5;j++)
	{
		printf("marks are of student %d are %d \n",j+1,marks[j]);
	}
}