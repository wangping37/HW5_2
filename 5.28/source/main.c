#include <stdio.h>
#include <stdlib.h>

char change(int x);//�^��r���j�p�g�ഫ

int main(void)
{
	char letter;//�r���HASCII�X��
	printf("�п�J�j�g�r��:");
	scanf_s("%c", &letter);
	printf("�^�Ǥp�g�r��:%c",change(letter));
	system("pause");
	return 0;
}
///////////////////////
char change(int x)
{
	if (x >= 65 && x <= 90)//A~Z��ASCII�X65~90
	{
		x = x + 32;
	}
	else if (x >= 97 && x <= 122)//a~z��ASCII�X97~122
	{
		x = x - 32;
	}
	return x;
}