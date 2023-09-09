#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int sumevenfib(int n)
{
	int fib[n * 2 + 1];
	int i = 0, sum = 0;

	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i <= n * 2; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];

		if (i % 2 == 0)
		{
			sum += fib[i];
		}
	}
	return (sum);
}
int main(void)
{
	int n;

	printf("Enter the Final number : ");
	scanf("%d", &n);

	int sum = sumevenfib(n);

	printf("Sum of Fibonacci Numbers up until %d = %d\n", n, sum);
	return (0);
}
