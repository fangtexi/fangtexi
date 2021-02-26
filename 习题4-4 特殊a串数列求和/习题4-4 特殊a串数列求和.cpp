#include <stdio.h>
int main()
{
    int a, n, i, s, item;
    s = 0, item = 0;
    scanf("%d %d", &a, &n);
    for (i = 0; i < n; i++)
    {
        item = 10 * item + a;
        s += item;
    }
    printf("s = %d", s);
    return 0;
}