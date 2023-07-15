#include<stdio.h>

int main()
{
	int besan=1,mummy=1,eater=1,barish=1;
	
	if(barish>0)
	{
		if(eater>0)
		{
			if(mummy>0)
			{
				if(besan>0)
				{
					printf("bhajiya");
				}
				else
				{
					printf("no saman");
				}
			}
			else
			{
				printf("mummy nai h");
			}
		}
		else
		{
			printf("khane wala nai h");
		}
	}
	else
	{
		printf("no barish");
	}
	
}