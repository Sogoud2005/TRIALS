#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int power(int n, int r)
{
	int i = 1, sum = 1;

	for (i = 1; i <= r; i++)
	{
		sum *= n;
	}
	return (sum);
}

int order(int x)
{
	int n = 0;

	while (x)
	{
		n++;
		x = x / 10;
	}

	return (n);
}

int check_arm(int x)
{
	int r = order(x);
	int tmp = x, sum = 0;

	if (x >= 2 && x <= 9)
        {
                return (0);
        }

	while (tmp)
	{
		int n = tmp % 10;
		sum += power(n, r);
		tmp = tmp / 10;
	}

	if (sum == x)
	{
		return (1);
	}
	else
		return (0);
}

int main(void)
{
	int start, end;

	printf("Enter the initial number : ");
	scanf("%d", &start);

	printf("Enter the final number : ");
	scanf("%d", &end);

	if (start >= end)
	{
		printf("What is this? Am I a joke to you?\n");
		return (-1);
	}

	while (start <= end)
	{
		if (check_arm(start) == 1)
		{
			printf("%d ", start);
		}
		start++;
	}
	printf("\n");
	return (0);
}
