#include "main.h"

bool isprime(int n)
{
	int i = 2;

	if (n < 2)
		return (false);

	for (; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (false);
	}
	return (true);
}
int main(void)
{
	int s, e, i;

	printf("Enter the initial number : ");
	scanf("%d", &s);

	printf("Enter the final number : ");
	scanf("%d", &e);

	if (s < 0)
		i = 2;

	else if (e < 0)
		printf("ERROR : final number cannot be negative\n"), exit(98);

	else if (s > e)
		printf("ERROR : Initial number > Final number\n"), exit(99);

	else
	{
		while (s <= e)
		{
			if (isprime(s))
			{
				i = s;
				printf("%d ", i);
			}
			s++;
		}
		printf("\n");
	}
	return (0);
}
