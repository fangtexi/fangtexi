#include <stdio.h>

int max(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));

    return 0;
}

/* 你的代码将被嵌在这里 */
int max(int a, int b)
{
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    return max;
}