#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	if (num % 2 == 0)
		printf("num��ż��");
	else
		printf("num������");
	return 0;
}