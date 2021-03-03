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

/* 你的代码将被嵌在这里 */
int narcissistic(int number)
{
	int remainder, sum = 1, allsum = 0;
	int x, count = 0, end = 1;  //初始化

	x = number;
	while (x != 0)
	{
		x = x / 10;
		count++; //这里求位数N 
	}

	x = number; //初始化x的值 进过while函数后x变化 
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
		sum = 1; //初始化end sum 的值，发现循环里面套循环 end的值会变的很大 sum也是
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
	m = m + 1;     //这里之前使用int M N  使得M=m+1 n=n 以为m和n不会变化 是我的电脑问题？？  电脑确实有点问题 
	for (m; m < n; m++)     //同一个代码 新建一个源文件以后就可以了
	{                               //前面之所以使用x=number 是因为后面需要重置number的值；这里不需要重置 不用int M N
		if (narcissistic(m) == 1)
			printf("%d\n", m);
	}
}