#include<stdio.h>
int main()
{
	int line = 0;
	printf("��ʼ�ô���\n");;
	while (line < 100)
	{
		printf("����:%d\n", line);
		line++;
	}
	if (line >= 100)
		printf("�߼�����Ա");
	return 0;
}