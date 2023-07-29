#include<stdio.h>

int batsman()
{
	float matches,runs,notout;
	
	printf("Enter your matches \n");
	scanf("%f",&matches);
	 
	printf("Enter your runs \n");
	scanf("%f",&runs); 
	
	printf("Enter your notout \n");
	scanf("%f",&notout);
	
	matches = matches-notout;
//	float average = runs/(matches-notout); 
	float average = runs/matches; 
	
	printf("average is %f",average);
}

void bowler()
{
	
}
void all()
{
	
}

int basic()
{
	int age;
	char name[1];
	char location[1];
	
	printf("Enter your name : \n");
	gets(name);
	
	printf("Enter your location : \n");
	gets(location);
	
	printf("Enter your age : \n");
	scanf("%d",&age);
	
	int role;
	
	printf("Enter your role \n");
	scanf("%d",&role);
	
	if(role ==1)
	{
		batsman();
	}
	else if(role == 2)
	{
		bowler();
	}
	else if(role == 3)
	{
		all();
	}
	else
	{
		printf("invalid choice\n");
	}
	
}


main()
{
	
	basic();
	
	
	
}