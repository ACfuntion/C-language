/*     ʹ��strcpy����ǰ��
#define _CRT_SECURE_NO_WARNINGS
*#include<string.h>    */
#include <stdio.h>
struct Book//����һ���ṹ������
{
	char name[20];//������
	short price;//�۸�
};
int main()
{
	//��һ��д��
	struct Book b1 = { "C���Գ������",55 };//����һ�������͵Ľṹ�����
	printf("����Ϊ��%s\n", b1.name);
	printf("�۸�Ϊ��%d\n", b1.price);

	/*�ڶ���д����ָ�������
	struct Book* pc = &b1;
	printf("����Ϊ��%s\n", pc->name);
	printf("�۸�Ϊ��%d\n", pc->price);*/

	/*   b1.price = 15;           �޸ļ۸�
		 strcpy(b1.name, "C++");  �޸�����       */
	return 0;
}