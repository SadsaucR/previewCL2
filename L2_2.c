/*AND�޿�&&�BOR�޿�||����*/
#include<stdio.h>
#pragma warning (disable:4996)
void L2_2()
{
	int score;
	printf("�п�J���Z: ");
	scanf("%d", &score);
	if ((score < 0) || (score > 100))
		printf("���Z��J���~");
	else if ((score < 60) && (score > 49))
		printf("�ݭn�ɦ�");
	else if ((score >= 60))
		printf("�ή�!");
	else
		printf("�S�ϤF!");
}