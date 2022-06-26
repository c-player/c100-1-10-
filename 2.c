#define _CRT_SECURE_NO_WARNINGS 1

/*企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？*/

#include <stdio.h>
#include <assert.h>

int main()
{
	double bonus = 0, profit = 0;
	printf("请输入利润：");
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
	printf("奖金为%.2lf元", bonus);
    return 0;
}