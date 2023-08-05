#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n, i = 1, sum = 0;

	printf("n = ");
	scanf("%d", &n);

	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("The sum of natural numbers up to n = %d\n", sum);
	return (0);
}
