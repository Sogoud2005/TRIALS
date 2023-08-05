#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i, j, n;

	printf("Enter 3 numbers : ");
	scanf("%d %d %d", &i, &j, &n);

	if (i == j == n)
                printf("All numbers are equal\n");

	else if (i >= j && i >= n)
		printf("The largest number is %d\n", i);

	else if (j >= i && j >= n)
		printf("The largest number is %d\n", j);

	else if (n >= i && n >= j)
		printf("The largest number is %d\n", n);

	return (0);
}
