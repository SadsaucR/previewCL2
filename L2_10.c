/*�_���j��d�� 99���k��*/
#include <stdio.h>

void L2_10()
{
	int i, j;
	for (i = 1;i <= 9;i++)
	{
		for (j = 1;j <= 9;j++)
			printf("%d*%d=%2d ", i, j, i * j);
		printf("\n");
	}
	
}