#include <stdlib.h>
#include <stdio.h>

int p1 = 1;
int p2 = 0;

void fibonacci(int n)
{
	int f;

	if (n < 3)
		return;

	f = p1 + p2;
	p2 = p1;
	p1 = f;

	printf("%d ", f);
	return (fibonacci(n - 1));
}
int main(void)
{
	int n;

	printf("Enter the number of  numbers : ");
	scanf("%d", &n);

	if (n < 1)
		printf("[ERROR] Invalid number of terms\n");
	else if (n == 1)
		printf("0");
	else if (n == 2)
		printf("0 1");
	else
	{
		printf("0 1 ");
		fibonacci(n);
	}
	printf("\n");
	return (0);
}
