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

/* ��Ĵ��뽫��Ƕ������ */
double funcos(double e, double x)
{
    double i = 0, a, flag = 1, sum;//������int��Ϊintȡֵ��Χ������ڶ��������ȥ��flag����ʵ��+-+-�任��
    double now = 0, diff = 6.66;
    for (; diff > e; i += 2)//��diffҲ����������+-��ֵС�ھ��ȣ����������ѴﵽҪ��
    {
        if (i == 0)sum = 1;
        else
        {
            sum = 1;
            for (a = 1; a <= i; a++)//���ѭ��������׳�
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