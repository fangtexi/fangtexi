#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int peach = 1;
    for (int i = 2; i <= n; i++)
    {
        peach = (peach + 1) * 2;
    }
    printf("%d", peach);
    return 0;
}