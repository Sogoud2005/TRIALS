#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i = 0, rem, temp;

	printf("Enter a number : ");
	scanf("%d", &n);

	temp = n;

	while (n > 0)
	{
		rem = n % 10;
		i = i + (rem * rem * rem);
		n = n / 10;
	}


	if (temp == i)
	{
		printf("The number %d is an armstrong number\n", temp);
		return (0);
	}
	else
	{
		printf("The number %d is not an armstrong number\n", temp);
		return (0);
	}
}
