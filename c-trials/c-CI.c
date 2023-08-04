#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double pow(double a, double b)
{
	double c = 1;
	int i;

	for (i = 1; i <= b; i++)
	{
		c *= a;
	}	
	return (c);
}

int main(void)
{
	double P, R, N, T, r, A;

	printf("Enter the principal amount : ");
	scanf("%lf", &P);

	printf("Enter the annual rate of interest : ");
	scanf("%lf", &R);

	printf("Enter the compound period : ");
	scanf("%lf", &N);

	printf("Enter time in years : ");
	scanf("%lf", &T);

	r = R / 100;

	A = P * pow((1 + r / N), (N * T));

	printf("The Compound Interest is %lf\n", A);
	return (1);
}
