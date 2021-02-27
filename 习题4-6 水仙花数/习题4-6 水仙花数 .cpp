#include<stdio.h>
#include<math.h>

int main() {
    int n, i, j, dig, num = 0, tmp, sum = 0;
    scanf_s("%d", &n);
    num = pow(10, n - 1);
    while (num < pow(10, n)) {
        sum = 0;
        tmp = num;
        for (i = 0; i < n; i++) {
            dig = tmp % 10;
            for (j = 1; j < n; j++)dig *= tmp % 10;
            sum += dig;
            tmp = tmp / 10;
        }
        if (sum == num)printf("%d\n", num);
        num++;
    }
    return 0;
}