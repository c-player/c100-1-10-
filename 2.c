#define _CRT_SECURE_NO_WARNINGS 1

/*��ҵ���ŵĽ������������ɡ�

����(I)���ڻ����10��Ԫʱ���������10%��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
�Ӽ������뵱������I����Ӧ���Ž���������*/

#include <stdio.h>
#include <assert.h>

int main()
{
	double bonus = 0, profit = 0;
	printf("����������");
	scanf("%lf", &profit);
	assert(profit > 0);
	int flag = (int)(profit / 100000);
	if (flag > 10)
	{
		flag = 10;
	}
	switch (flag)
	{
	case 10:
		bonus += (profit - 1000000)*0.01;
		profit = 1000000;
	case 6:
		bonus += (profit - 600000)*0.015;
		profit = 600000;
	case 4:
		bonus += (profit - 400000)*0.03;
		profit = 400000;
	case 2:
		bonus += (profit - 200000)*0.05;
		profit = 200000;
	case 1:
		bonus += (profit - 100000)*0.075;
		profit = 100000;
	case 0:
		bonus += profit * 0.1;
		break;
	default:
		break;
	}
	printf("����Ϊ%.2lfԪ", bonus);
    return 0;
}