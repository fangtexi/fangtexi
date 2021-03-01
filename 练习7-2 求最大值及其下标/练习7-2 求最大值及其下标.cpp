#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int* parr;
    int cnt = 0;
    parr = (int*)malloc(4 * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &parr[i]);
    }
    for (int j = 1; j < n; j++)
    {
        if (parr[0] < parr[j])
        {
            parr[0] = parr[j];
            cnt++;
        }
    }
    printf("%d %d", parr[0], cnt);
}