#define _CRT_SECURE_NO_WARNINGS 1

//输入三个整数x, y, z，请把这三个数由小到大输出。

int CompNum(int x, int y)
{
	return x > y ? x : y;//返回较大的数
}

#include <stdio.h>
int main()
{
	int x = 0, y = 0, z = 0;
	int temp = 0;
	printf("请输入要比较的三个数，以空格隔开：");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	if (x > z)
	{
		temp = x;
		x = z;
		z = temp;
	}
	if (y > z)
	{
		temp = y;
		y = z;
		z = temp;
	}
	printf("三个数从小到大分别为：%d %d %d", x, y, z);
    return 0;
}