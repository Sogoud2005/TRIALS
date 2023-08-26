#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int count(int n)
{
	int i = 0;

	while (n)
	{
		i++;
		n = n / 10;
	}

	return (i);
}

int main(void)
{
	int n, i = 0, mul, d, sum = 0;
	int *arr;

	printf("Enter a Number : ");
	scanf("%d", &n);

	mul = n * n;

	d = count(mul);

	int tmp = mul;

	arr = malloc(sizeof(int) * d);

	while (mul)
	{
		arr[i] = mul % 10;
		mul = mul / 10;
		i++;
	}

	int l = 0;

	while (l < d)
	{
		sum += arr[l];
		l++;
	}

	if (sum == n)
	{
		printf("%d is a Neon Number\n", n);
	}
	else
		printf("%d is not a Neon Number\n", n);

	return (0);
}
