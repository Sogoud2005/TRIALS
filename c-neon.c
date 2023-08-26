#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int n, i = 0, mul;
	int *arr;

	printf("Enter a Number : ");
	scanf("%d", &n);

	mul = n * n;

	int tmp = mul;

	while (mul)
	{
		arr[i] = mul % 10;
		mul = mul / 10;
		i++;
	}
