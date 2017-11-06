#include <stdio.h>
#include <stdlib.h>

char change(int x);//英文字母大小寫轉換

int main(void)
{
	char letter;//字母以ASCII碼表式
	printf("請輸入大寫字母:");
	scanf_s("%c", &letter);
	printf("回傳小寫字母:%c",change(letter));
	system("pause");
	return 0;
}
///////////////////////
char change(int x)
{
	if (x >= 65 && x <= 90)//A~Z的ASCII碼65~90
	{
		x = x + 32;
	}
	else if (x >= 97 && x <= 122)//a~z的ASCII碼97~122
	{
		x = x - 32;
	}
	return x;
}