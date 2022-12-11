#include<stdio.h>
int Add(int x, int y)
{
	 int z = x + y;
		return z;
}
int main()
{
	int num1 = 196;
	int num2 = 427;
	int sum = 0;
	sum = Add(num1, num2);
	printf("两个数的和为:%d\n", sum);
	return 0;
}