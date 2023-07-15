#include<stdio.h>
int main()
{
	
	/*
	
	AND		r1		r2		result
			true 	true	true
			false	true	false
			true	false	false
			false	false	false
			
	OR		r1		r2		result
			True	True	True
			false	true	true
			true	false	true
			false	false	false
	
	
	
	*/
	int age=1;
	
	if(age>0 && age<=10 )
	{
		printf("you can drink water");
	}
	else if(age>10 && age<=15)
	{
		printf("you can drink water with chai");
	}
	else if(age>16 && age<=25)
	{
		printf("you can drink water with alchohol");
	}
	else
	{
		printf("wrong");
	}
	
	
}