#include <stdio.h>

int main()
{
    int x, i, j, k, cnt = 0;
    scanf_s("%d", &x);
    for (i = ((x - 3) / 5); i >= 1; i--)
        for (j = (x - i * 5) / 2; j >= 1; j--)
            for (k = (x - i * 5 - j * 2); k >= 1; k--)
            {
                if ((i * 5 + j * 2 + k) == x)
                {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, i + j + k);
                    cnt++;
                }
            }
    printf("count = %d\n", cnt);
    return 0;
}