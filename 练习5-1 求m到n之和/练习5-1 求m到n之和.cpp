#include <stdio.h>

int sum(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int sum(int m, int n)
{
	int i;
	int sum = 0;
	for (i = m; i <= n; i++) {
		sum = sum + i;
	}
	return sum;
}
