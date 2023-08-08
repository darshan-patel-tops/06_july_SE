#include<stdio.h>

struct name1
{
	int age1;
	char name[100];
	float age2;
};


union name2
{
	int age1; //4
	char name[100];  //1
	float age2; //4
};

main()
{

struct name1 n1;
union name2 n2;

printf(" size of structure %d \n",sizeof(n1));	

printf(" union size %d",sizeof(n2));	
	
	
	
}