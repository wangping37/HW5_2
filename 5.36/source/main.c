#include <stdio.h>
#include <stdlib.h>

void Hanoi(int n, char dep, char check, char dest);//Hanoi Tower �Фl�B�X�o�a�B���~���B�ت��a

int main(void)
{
	int n;
	printf("Hanoi Tower���Фl��:");
	scanf_s("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}
////////////////////////////////////
void Hanoi(int n, char dep, char check, char dest)//Hanoi Tower �Фl�B�X�o�a�B���~���B�ت��a
{
	if (n == 1)
	{
		printf("%c ---> %c\n",dep,dest);
	}
	else
	{
		Hanoi(n - 1, dep, dest, check);//��n�ӺФl�Q�����̩����@���[�W�W���O�@�j��
		Hanoi(1, dep, check, dest);
		Hanoi(n - 1, check, dep, dest);
	}

}