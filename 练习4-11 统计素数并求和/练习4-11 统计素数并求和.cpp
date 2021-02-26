#include <stdio.h>
int main()
{
    int isprime(int i);
    int m, n, j, i, sum = 0, cnt = 0;
    scanf_s("%d %d", &m, &n);
    for (i = m; i <= n; i++)
        if (isprime(i) == 1)
        {
            sum += i;
            cnt++;
        }
    printf("%d %d", cnt, sum);
    return 0;
}

int isprime(int i)
{
    int ret = 1, n;
    if (i == 1)
        ret = 0;
    else
    {
        for (n = 2; n < i; n++)
            if (i % n == 0)
            {
                ret = 0;
                break;
            }
    }
    return ret;
}