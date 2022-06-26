#define _CRT_SECURE_NO_WARNINGS 1

//要求输出国际象棋棋盘

/*
解决无法输出ASCII码对应字符问题：
运行后控制台右键->默认值->选择旧版本->关闭后重新运行程序->右键属性->当前代码页改为437
*/
#include <stdio.h>

void print(void)
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
				printf("%c", 219);
			else printf("  ");
		}
		printf("\n");
	}
}

int main()
{
	print();
	return 0;
}
