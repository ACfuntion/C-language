#include<stdio.h>
int Max(int x, int y)
{
		if (x > y)
			return x;
		else
			return y;
}
	int main()
	{
	int num1 = 196;
	int num2 = 427;
	int max = 0;
	max = Max(num1, num2);
	printf("最大值是:%d\n", max);
	return 0;
}