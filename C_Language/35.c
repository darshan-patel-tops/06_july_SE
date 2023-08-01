#include<stdio.h>
float runs,match,wickets,notout;
	
float bowler(float r,float m,float w)
{
	float economy = 0;
	economy = r/w;
	float test()
	{
		printf("hello");
	}
	return economy;
//	return test();
}

float batsman(float r,float m,float n)
{
	float average=0;
	m = m - n;

	average = r/m;
	printf("average is : %f",average);

}

float all()
{
//	float average=0;
//	m = m - n;
//float economy = 0;
//	economy = r/w;
////	return economy;
//	average = r/m;
//	printf("average is : %f",average);
}


int basic()
{
	int age;
	char name[10];
	char location[10];
	
//	printf("Enter name : ");
//	gets(name);
	
	printf("Enter Age : ");
	scanf("%d",&age);
//	fflush(stdin);
//	printf("Enter location : ");
//	gets(location);
	
	
//	printf("Your name is : %s\n",name);
//	printf("Your location is : %s\n",location);
	printf("Your age is : %d\n",age);
	
	
	int choice;
	
	printf("your role : ");
	scanf("%d",&choice);
	
	
	 
	if(choice==1)
	{
		printf("Enter your runs : ");
		scanf("%f",&runs);
		printf("Enter your wickets : ");
		scanf("%f",&wickets);
		printf("Enter your match : ");
		scanf("%f",&match);
//		printf("you entered %f",runs);
		float average2 = bowler(runs,match,wickets);
		printf("economy is : %f ",average2);
	}
	else if(choice ==2)
	{
			printf("Enter your runs : ");
		scanf("%f",&runs);
		printf("Enter your match : ");
		scanf("%f",&match);
		printf("Enter your notout : ");
		scanf("%f",&notout);
		batsman(runs,match,notout);
	}
	else if(choice ==3)
	{
//		bowler();
//		batsman();
//		all();
	}
	else
	{
		printf("invalid");
	}
}


main()
{
	basic();
}