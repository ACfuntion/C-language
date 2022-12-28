#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	/*scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;              求n的阶乘：n！
	}
	printf("%d\n", ret);*/
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;                //求各阶乘的相加：1！+2！+3！+.....
		sum = sum + ret;
	}
	printf("%d\n", sum);
        return 0;
}