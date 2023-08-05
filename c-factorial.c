#include <stdlib.h>
#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
int main(void)
{
	int n, f;

	printf("n = ");
	scanf("%d", &n);

	printf("The factorial of n = %d\n", factorial(n));

	return (0);
}
