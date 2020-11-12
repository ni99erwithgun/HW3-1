#include <stdio.h>
#include <stdlib.h>
#include<time.h>

enum status{Continue,won,lose};
int rolldice(void);
int main(void)
{
	int sum,mypoint;
	enum status gamestatus;
	srand(time(NULL));
	sum = rolldice();
	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = won;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = lose;
		break;
	default:
		gamestatus = Continue;
		mypoint = sum;
		printf("Point is %d\n", mypoint);
		break;
	}
	while (gamestatus == Continue)
	{
		sum = rolldice();
		if (sum == mypoint)
		{
			gamestatus = won;
		}
		else
		{
			if (sum == 7)
			{
				gamestatus = lose;
			}
		}
	}
	if (gamestatus == won)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("Player lose\n");
	}
	system("pause");
	return 0;
}
int rolldice(void)
{
	int d1, d2, worksum;
	d1 = 1 + (rand() % 6);
	d2 = 1 + (rand() % 6);
	worksum = d1 + d2;

	printf("Player rolled %d + %d= %d\n", d1, d2, worksum);
	return worksum;
}
	
