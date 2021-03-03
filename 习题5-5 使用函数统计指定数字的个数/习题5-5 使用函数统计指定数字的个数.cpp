#include <stdio.h>

int CountDigit(int number, int digit);

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit(int number, int digit)
{
    int num;
    int cnt = 0;
    if (number == 0 && digit == 0)
        cnt++;
    if (number < 0)
        number = -number;
    while (number)
    {
        num = number % 10;
        if (num == digit)
        {
            cnt++;
        }
        number = number / 10;
    }
    return cnt;
}