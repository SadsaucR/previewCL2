/*�`���D��:�˼ƿ�X(�j��Ѫk)*/
#include <stdio.h>
#pragma warning (disable:4996)
void L2_11()
{
	int a,r,i;
	printf("�п�J�@��Ʀr:");
	scanf("%d", &a);
	printf("�˼Ƭ�:");
	for (i = 0;a!=0;i++)
	{
		r = a % 10;
		a /= 10;
		printf("%d", r);
	}
}