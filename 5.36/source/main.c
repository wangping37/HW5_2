#include <stdio.h>
#include <stdlib.h>

void Hanoi(int n, char dep, char check, char dest);//Hanoi Tower 碟子、出發地、中繼站、目的地

int main(void)
{
	int n;
	printf("Hanoi Tower的碟子數:");
	scanf_s("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}
////////////////////////////////////
void Hanoi(int n, char dep, char check, char dest)//Hanoi Tower 碟子、出發地、中繼站、目的地
{
	if (n == 1)
	{
		printf("%c ---> %c\n",dep,dest);
	}
	else
	{
		Hanoi(n - 1, dep, dest, check);//把n個碟子想像成最底部一塊加上上面是一大塊
		Hanoi(1, dep, check, dest);
		Hanoi(n - 1, check, dep, dest);
	}

}