#include <stdio.h>
#include <stdlib.h>

int integerPower(int base, int exponent);//base�����Aexponent�����

int main(void)
{
	int base, exponent;
	printf("��J���ƩM����:");
	scanf_s("%d %d", &base, &exponent);
	printf("%d��%d���謰%d\n", base, exponent, integerPower(base, exponent));
	system("pause");
	return 0;
}
/////////////////////////////////////////////////////
int integerPower(int base, int exponent)
{
	int x = 1;
	if (exponent == 0)
	{
		return 1;
	}
	else if (exponent == 1)
	{
		return base;
	}
	x = base * integerPower(base, (exponent - 1));
	return x;
}