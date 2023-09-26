/*AND邏輯&&、OR邏輯||應用*/
#include<stdio.h>
#pragma warning (disable:4996)
void L2_2()
{
	int score;
	printf("請輸入成績: ");
	scanf("%d", &score);
	if ((score < 0) || (score > 100))
		printf("成績輸入錯誤");
	else if ((score < 60) && (score > 49))
		printf("需要補考");
	else if ((score >= 60))
		printf("及格!");
	else
		printf("沒救了!");
}