#include <stdio.h>

void pyramid(int n);

int main()
{
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void pyramid(int n)
{
    int i;
    int k;
    int j;
    for (i = 1; i <= n; i++)
    {
        for (k = (n - i); k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}