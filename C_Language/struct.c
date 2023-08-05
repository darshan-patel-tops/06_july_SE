#include<stdio.h>

struct name1
{
	char name[100];
	int age;
};
union name2
{
	char name[100];
	int age;
	
};



int main()
{
	
	
	printf("%d \n",sizeof(struct name1));
	printf("%d \n",sizeof(union name2));
	
	struct name1 n;
	n.age=5;
//	n.name[100]="bhavesh";

	printf("%d \n",n.age);
//	printf("%s",n.name);
}