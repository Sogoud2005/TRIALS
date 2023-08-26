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
	int x;

	printf("Enter a number : ");
	scanf("%d", &x);

	if (check_arm(x) == 1)
	{
		printf("The Number %d is an Armstrong/Narcissistic Number\n", x);
		return (0);
	}

	else
	{
		printf("The Number %d is not an Armstrong/Narcissistic Number\n", x);
		return (-1);
	}
}
