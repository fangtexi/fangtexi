#include <stdio.h>

int main()
{
    int speed, limit;
    double x;
    scanf_s("%d %d", &speed, &limit);
    if ((speed - limit) < (limit * 0.1))
    {
        printf("ok");
    }
    else if ((speed - limit) >= (limit * 0.1) && (speed - limit) < (limit * 0.5))
    {
        x = (((double)speed - limit) / limit) * 100.0;
        printf("Exceed %.0lf%%. Ticket 200", x);
    }
    else if ((speed - limit) >= (limit * 0.5))
    {
        x = (((double)speed - limit) / limit) * 100;
        printf("Exceed %.0lf%%. License Revoked", x);
    }
    return 0;
}