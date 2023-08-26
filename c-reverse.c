#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int *n;
	int i, c = 0;

	printf("Enter a Number : ");
	scanf("%d", &i);

	while (i)
	{
		n[c] = i % 10;
		printf("%d", n[c]);
		i = i / 10;
		c++;
	}
	printf("\n");

	return (0);
}
