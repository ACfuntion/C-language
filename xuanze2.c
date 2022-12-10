#include<stdio.h>
int main()
{
	int input = 0;
	printf("是否好好学习?\n");
	printf("请输入1或0\n");
	scanf_s("%d", &input);
	if (input == 1)
		printf("好工作\n");
	else
		printf("种地\n");
	return 0;
}