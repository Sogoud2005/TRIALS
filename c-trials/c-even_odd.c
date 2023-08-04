#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	if (n == 0)
	{
		printf("Zero is neither even nor odd\n");
		return (0);
	}
	if (n % 2 == 0)
		printf("The number %d is even\n", n);
	else
		printf("The number %d is odd\n", n);

	return (1);
}
