/*�n�Ϊ��h����ܱ���switch */
#include<stdio.h>
#pragma warning (disable:4996)
void L2_5()
{
	char oper;
	printf("�п�J�B��Ÿ�:");
	scanf("%c", &oper);

	switch (oper)
	{
	case'+':
		printf("�w��J�[��");
		break;
	case'-':
		printf("�w��J�");
		break;
	case'*':
		printf("�w��J����");
		break;
	case'/':
		printf("�w��J����");
		break;
	default:
		printf("��J���~!");
	}
}