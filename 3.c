#define _CRT_SECURE_NO_WARNINGS 1

//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�

#include <stdio.h>
#include <math.h>

//�㷨1

//int main()
//{
//	int x = 0, y = 0;
//	int i = 0;
//	for (i = -100; i < 100000; i++)
//	{
//		x = (int)sqrt(i + 100);
//		y = (int)sqrt(i + 268);
//		if (((i + 100) == x * x) && ((i + 268) == y * y))
//		{
//			printf("%d + 100 = %d * %d\n", i, x, x);
//			printf("%d + 268 = %d * %d\n\n", i, y, y);
//		}
//	}
//    return 0;
//}

//�㷨��
/*
x + 100 = m * m
x + 268 = n * n, xΪ����ʱ��m��n��Ϊ������xΪż��ʱ��m��n��Ϊż��
( n + m )( n - m ) = 168
�� i = n + m, j = n - m��i, j��Ϊ����0��ż���� i > j
i * j = 168
*/
int main()
{
	int i = 0, j = 0, m = 0, n = 0;
	int x = 0;
	for (i = 2; i <= 168 / 2; i += 2)
	{
		if (168 % i == 0)
		{
			j = 168 / i;
			if ((i > j) && (j % 2 == 0))
			{
				n = (i + j) / 2;
				m = (i - j) / 2;
				x = m * m - 100;
				printf("%d + 100 = %d * %d\n", x, m, m);
				printf("%d + 268 = %d * %d\n\n", x, n, n);
			}
		}
	}
}
