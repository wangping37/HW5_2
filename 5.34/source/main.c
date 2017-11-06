#include <stdio.h>
#include <stdlib.h>

int integerPower(int base, int exponent);//base為底，exponent當指數

int main(void)
{
	int base, exponent;
	printf("輸入底數和指數:");
	scanf_s("%d %d", &base, &exponent);
	printf("%d的%d次方為%d\n", base, exponent, integerPower(base, exponent));
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