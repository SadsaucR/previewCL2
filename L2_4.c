/*除了if-else的條件運算子>> ?: */
#include<stdio.h>
#pragma warning (disable:4996)
void L2_4()
{
	int a,b,big;
	printf("請輸入兩個數值:");
	scanf("%d %d", &a,&b);
	a > b ? (big = a) : (big = b);
	printf("%d的值較大", big);
}