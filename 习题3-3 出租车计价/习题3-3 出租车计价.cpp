#include <stdio.h>

int main()
{
    int time;
    double km, price;
    scanf_s("%lf %d", &km, &time);
    if (km > 0 && km <= 3)
    {
        price = 10.0 + ((time / 5) * 2.0);
        printf("%.0lf", price);
    }
    else if (km > 3 && km <= 10)
    {
        price = 10.0 + ((km - 3.0) * 2.0) + ((time / 5) * 2.0);
        printf("%.0lf", price);
    }
    else if (km > 10)
    {
        price = 24.0 + ((km - 10) * 3.0) + ((time / 5) * 2.0);
        printf("%.0lf", price);
    }
    return 0;
}