#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos(double e, double x)
{
    double i = 0, a, flag = 1, sum;//这里用int因为int取值范围的问题第二个点过不去。flag用于实现+-+-变换。
    double now = 0, diff = 6.66;
    for (; diff > e; i += 2)//当diff也就是我们新+-的值小于精度，表明精度已达到要求。
    {
        if (i == 0)sum = 1;
        else
        {
            sum = 1;
            for (a = 1; a <= i; a++)//这个循环用来求阶乘
            {
                sum *= a;
            }
        }
        diff = pow(x, i) / sum;
        now += flag * diff;
        flag = -flag;
    }
    return now;
}