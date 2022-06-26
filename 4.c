#define _CRT_SECURE_NO_WARNINGS 1

//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

#include <stdio.h>
#include <assert.h>

int isLeapYear(int year)
{
	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int common[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int leap[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int year = 0, month = 0, day = 0;
	int i = 0, sum = 0;
	printf("�����������գ��м��Կո������");
	scanf("%d%d%d", &year, &month, &day);
	assert(year > 0 && month > 0 && month < 13);
	if (1 == isLeapYear(year))
	{
		assert(day < leap[month - 1] && day>0);
		for (i = 0; i < month - 1; i++)
		{
			sum += leap[i];
		}
		sum += day;
	}
	else
	{
		assert(day < common[month-1] && day>0);
		for (i = 0; i < month - 1; i++)
		{
			sum += common[i];
		}
		sum += day;
	}
	printf("���Ǳ����%d�졣", sum);
    return 0;
}