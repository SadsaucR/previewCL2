/*°j°é-¨Ï¥Îwhile±Ô­z ²Ö¥[*/
#include<stdio.h>

void L2_8()
{
	int i=1, sum = 0;
	while (i <= 10)
	{
		sum += i;
		printf("%d", i);
		if(i<10)
		printf("+");
		i++;
	}
	printf("=%d", sum);
}