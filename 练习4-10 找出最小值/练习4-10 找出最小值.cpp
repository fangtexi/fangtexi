#include <stdio.h>
#include <malloc.h>
int main()
{
    int n, num, i, a, tem, j;
    int* par;
    scanf_s("%d", &n);
    par = (int*)malloc(4 * n);
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &par[i]);
    }
    for (j = 0; j < (n - 1); j++)
    {
        for (a = 0; a < (n - 1 - j); a++)
        {
            if (par[a] > par[a + 1])
            {
                tem = par[a];
                par[a] = par[a + 1];
                par[a + 1] = tem;
            }
        }
    }
    printf("min = %d", par[0]);
    return 0;
}