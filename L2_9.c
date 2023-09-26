/*°j°é-¨Ï¥Îdo while±Ô­z ²Ö¥[*/
#include<stdio.h>

void L2_9()
{
	int i = 1, sum = 0;
	do
	{
		sum += i;
		printf("%d", i);
		if (i < 10)
			printf("+");
		i++;
	} while (i <= 10);
	printf("=%d", sum);
}