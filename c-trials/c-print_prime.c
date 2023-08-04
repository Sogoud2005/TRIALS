#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
	int i = 2;

	if (n < 2)
		return false;

	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main(void)
{
	int n, i = 1;

	printf("Enter the final number : ");
        scanf("%d", &n);

	if (n < 2)
        {
                printf("No numbers to print.\n");
                if (n < 0)
                        printf("[ERROR] negative numbers can't be prime.\n");
                return (0);
        }

	for (; i < n; i++)
	{
		if(isPrime(i))
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}

