#define _CRT_SECURE_NO_WARNINGS 1

//������������x, y, z���������������С���������

int CompNum(int x, int y)
{
	return x > y ? x : y;//���ؽϴ����
}

#include <stdio.h>
int main()
{
	int x = 0, y = 0, z = 0;
	int temp = 0;
	printf("������Ҫ�Ƚϵ����������Կո������");
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
	printf("��������С����ֱ�Ϊ��%d %d %d", x, y, z);
    return 0;
}