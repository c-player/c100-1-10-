//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0, j = 0, k = 0;
	int count = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j && i != k && j != k)
				{
					printf("%d%d%d ", i, j, k);
					count++;
				}
			}
		}
		printf("\n");
	}
	printf("有%d个互不相同且无重复数字的三位数", count);
    return 0;
}