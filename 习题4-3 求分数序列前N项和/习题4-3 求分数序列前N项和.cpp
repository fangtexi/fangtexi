#include <stdio.h>
int main()
{
    int n;
    double item, sum = 0.0, a = 1.0, b = 2.0, c;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        item = b / a;
        sum += item;
        c = a;
        a = b;
        b = a + c;
    }
    printf("%.2lf", sum);
}