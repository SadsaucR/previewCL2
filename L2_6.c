/*°j°é-¨Ï¥Îgoto±Ô­z ²Ö¥[*/
#include<stdio.h>

void L2_6()
{
	int i = 0,sum = 0;
start:
	i++;
	sum += i;
	printf("%d", i);
	if (i < 10)
	{
		printf("+");
		goto start;
	}
		printf("=%d", sum);
}