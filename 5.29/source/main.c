#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int main(void)
{
	int a, b;
	printf("�п�J��Ӿ��:");
	scanf_s("%d %d", &a, &b);
	printf("���Ƴ̤p������:%d\n", lcm(a, b));
	system("pause");
	return 0;
}
////////////////////////////
int gcd(int a, int b)
{
	int x;
	while (b != 0)
	{
		x = a % b;
		a = b;
		b = x;
	}
	return  a;
}
//////////////////////////////
int lcm(int a,int b)
{
	return (a * b) / gcd(a,b);
}