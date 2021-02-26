#include<stdio.h>
#include<stdlib.h>
int main()
{
	double x = 0;
	double sum = 1;
	double result = 1;
	scanf("%lf", &x);
	for (int i = 1;; i++)
	{
		result = result * (x / i);
		sum += result;
		if (result < 0.00001)
		{
			break;
		}
	}
	printf("%.4f\n", sum);
	return 0;
}