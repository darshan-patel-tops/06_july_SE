#include<stdio.h>
#include<string.h>

main()
{
	char name[] = "divyaveer";
	int age;
	printf("%d\n",sizeof(name)); //bytes
	printf("%d\n",sizeof(age)); //bytes
	printf("%d\n",strlen(name)); //length of string
	
	
	char replace[10];
	printf("%d\n",strcpy(replace,name)); //length of string
	printf("%s\n",replace);

	char n1[]="12345";
	char n2[]="12345";
	char n3[]="helloo";
	
	printf("%d\n",strcmp(n1,n2));
	printf("%d\n",strcmp(n1,n3));
	printf("%d\n",strcmp(n3,n1));


	char welcome[]="Hello ";
	char name1[]="  divyaveer";
	printf("%s %s\n",welcome,name1);
	printf("%s",strcat(welcome,name1));


}