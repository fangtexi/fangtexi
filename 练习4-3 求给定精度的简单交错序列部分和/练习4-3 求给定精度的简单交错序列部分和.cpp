#include <stdio.h>
#include <math.h>

int main()
{
    double eps;
    double sum = 0.0;
    int count = 1;
    scanf_s("%lf", &eps);
    if (eps < 1)
    {
        for (int i = 1; fabs(1 / (i * 3.0 - 2.0)) >= eps; i++, count++)
        {
            if (count % 2 == 0)
                sum -= 1 / ((i * 3.0) - 2.0);
            else
                sum += 1 / ((i * 3.0) - 2.0);
        }
        printf("sum = %.6lf", sum);
    }
    else
        printf("sum = 1.000000");
    return 0;
}
