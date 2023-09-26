/*常見題目:倒數輸出(迴圈解法)*/
#include <stdio.h>
#pragma warning (disable:4996)
void L2_11()
{
	int a,r,i;
	printf("請輸入一串數字:");
	scanf("%d", &a);
	printf("倒數為:");
	for (i = 0;a!=0;i++)
	{
		r = a % 10;
		a /= 10;
		printf("%d", r);
	}
}