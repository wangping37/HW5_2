#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int x);

int main(void)
{
	unsigned int number;
	unsigned int i = 1;
	printf("請輸入第幾項:");
	scanf_s("%u", &number);
	printf("fibonacci第 %u 項為 %llu\n", number, fibonacci(number));
	while (fibonacci(i) >= fibonacci(i - 1))
	{
		i++;
	}
	printf("第%u項\n", (i-1));
	printf("fibonacci可印出最大值為%llu\n", fibonacci(i-1));
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int x)
{
	unsigned int n;
	unsigned long long int base0 = 0;
	unsigned long long int	base1 = 1;
	unsigned long long int y;
	if (x == 0 || x==1)
	{
		return 0;
	}
	else if (x == 2)
	{
		return 1;
	}
	else
	{
		for (n = 3; n <= x; n++)
		{
			y = base0 + base1;
			base0 = base1;
			base1 = y;
		}
		return y;
	}
}
