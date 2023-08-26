#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int f, i, n;

	printf("Enter a number : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
