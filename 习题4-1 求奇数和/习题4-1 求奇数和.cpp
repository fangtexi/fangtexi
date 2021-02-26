#include <stdio.h>
int jishu(int i);
int main()
{
    int i, sum = 0;
    do
    {
        scanf("%d", &i);
        if (jishu(i) == 1)
        {
            sum += i;
        }
    } while (i > 0);
    printf("%d", sum);
    return 0;
}
int jishu(int i)
{
    int ret = 1;
    if ((i % 2) == 0)
        ret = 0;
    else if (i < 0)
        ret = 0;
    return ret;
}