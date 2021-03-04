#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int fn(int a, int n)
{
    int i, num;
    if (a != 0 && n != 0)
    {
        int j = a;
        if (n == 1)
            return a;
        for (i = 1; i < n; i++)
        {
            num = (a * 10) + j;
            a = num;
        }
        return num;
    }
}

int SumA(int a, int n)
{
    int i, sum = a, num, j = a;
    if (n == 1)
        return a;
    for (i = 1; i < n; i++)
    {
        num = a * 10 + j;
        a = num;
        sum = sum + num;
    }
    return sum;
}