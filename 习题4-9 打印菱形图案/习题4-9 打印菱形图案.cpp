# include <stdio.h>

int main()
{
	int n, i, j, t;
	scanf("%d", &n);
	//�ϰ벿�ְ����һ�е�������
	for (i = 1; i <= n / 2 + 1; i++)
	{
		for (j = 0; j < n; j++)

		{
			if (j + (i * 2 - 1) < n)
				printf(" ");
			else
				printf("* ");
		}
		printf("\n");
	}
	//�°벿�ֵ�����
	for (i = 1; i <= n / 2; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= 2 * i)
				printf(" ");
			else
				printf("* ");
		}
		printf("\n");
	}

	return 0;
}