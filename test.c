/*     使用strcpy函数前提
#define _CRT_SECURE_NO_WARNINGS
*#include<string.h>    */
#include <stdio.h>
struct Book//创建一个结构体类型
{
	char name[20];//数组名
	short price;//价格
};
int main()
{
	//第一种写法
	struct Book b1 = { "C语言程序设计",55 };//创建一个该类型的结构体变量
	printf("书名为：%s\n", b1.name);
	printf("价格为：%d\n", b1.price);

	/*第二种写法（指针变量）
	struct Book* pc = &b1;
	printf("书名为：%s\n", pc->name);
	printf("价格为：%d\n", pc->price);*/

	/*   b1.price = 15;           修改价格
		 strcpy(b1.name, "C++");  修改书名       */
	return 0;
}