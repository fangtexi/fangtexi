#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int narcissistic(int number)
{
	int remainder, sum = 1, allsum = 0;
	int x, count = 0, end = 1;  //��ʼ��

	x = number;
	while (x != 0)
	{
		x = x / 10;
		count++; //������λ��N 
	}

	x = number; //��ʼ��x��ֵ ����while������x�仯 
	while (x != 0)
	{
		remainder = x % 10;
		for (end; end <= count; end++)
		{
			sum *= remainder;
		}
		allsum += sum;
		x = x / 10;
		end = 1;
		sum = 1; //��ʼ��end sum ��ֵ������ѭ��������ѭ�� end��ֵ���ĺܴ� sumҲ��
	}

	if (allsum == number)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void PrintN(int m, int n)
{
	m = m + 1;     //����֮ǰʹ��int M N  ʹ��M=m+1 n=n ��Ϊm��n����仯 ���ҵĵ������⣿��  ����ȷʵ�е����� 
	for (m; m < n; m++)     //ͬһ������ �½�һ��Դ�ļ��Ժ�Ϳ�����
	{                               //ǰ��֮����ʹ��x=number ����Ϊ������Ҫ����number��ֵ�����ﲻ��Ҫ���� ����int M N
		if (narcissistic(m) == 1)
			printf("%d\n", m);
	}
}