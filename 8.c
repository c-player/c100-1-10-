#define _CRT_SECURE_NO_WARNINGS 1

//Êä³ö9*9¿Ú¾÷¡£

#include <stdio.h>

void print(int n)
{
	int i = 0, j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %-3d ", j, i, j*i);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	print(n);
    return 0;
}