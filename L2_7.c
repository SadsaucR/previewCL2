/*°j°é-¨Ï¥Îfor±Ô­z ²Ö¥[*/
#include<stdio.h>

void L2_7()
{
	int i, sum = 0;
	for (i = 1;i <= 10;i++)
	{
		sum += i;
		printf("%d",i);
		if (i < 10)
			printf("+");
	}
	printf("=%d", sum);
}