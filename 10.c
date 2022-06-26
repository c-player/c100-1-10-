#define _CRT_SECURE_NO_WARNINGS 1

//打印楼梯，同时在楼梯上方打印两个笑脸。

#include<stdio.h>

int main(void)
{
	printf("^-^\n");
	int i = 0, j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c", 219);
			if (i == 0)
			{
				printf("^-^");
			}
		}
		printf("\n");
	}
}
