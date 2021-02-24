#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	if (num % 2 == 0)
		printf("num是偶数");
	else
		printf("num是奇数");
	return 0;
}