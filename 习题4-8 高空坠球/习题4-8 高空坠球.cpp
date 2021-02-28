#include<stdio.h>
int main() {
    int n, i;
    long h1;
    double x = 0, reh = 0, h2;

    scanf("%ld %d", &h1, &n);
    h2 = h1;
    for (i = 1; i <= n; i++) {
        x += h2 + reh;
        reh = h2 / 2;
        h2 = h2 / 2;
    }
    printf("%.1f %.1f", x, reh);
    return 0;
}