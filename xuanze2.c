#include<stdio.h>
int main()
{
	int input = 0;
	printf("�Ƿ�ú�ѧϰ?\n");
	printf("������1��0\n");
	scanf_s("%d", &input);
	if (input == 1)
		printf("�ù���\n");
	else
		printf("�ֵ�\n");
	return 0;
}