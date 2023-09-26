/*好用的多重選擇條件式switch */
#include<stdio.h>
#pragma warning (disable:4996)
void L2_5()
{
	char oper;
	printf("請輸入運算符號:");
	scanf("%c", &oper);

	switch (oper)
	{
	case'+':
		printf("已輸入加號");
		break;
	case'-':
		printf("已輸入減號");
		break;
	case'*':
		printf("已輸入乘號");
		break;
	case'/':
		printf("已輸入除號");
		break;
	default:
		printf("輸入錯誤!");
	}
}