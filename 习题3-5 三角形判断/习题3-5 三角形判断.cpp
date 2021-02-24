#include <stdio.h>
#include <math.h>
int main() {
    double x1, y1, x2, y2, x3, y3;
    scanf_s("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double a, b, c;
    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        double l, s, p;
        l = a + b + c;
        p = l / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("L = %.2lf, A = %.2lf", l, s);
    }
    else printf("Impossible");
    return 0;
}