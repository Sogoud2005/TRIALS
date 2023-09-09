#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int a, b;
	int sum;

	if (argc != 3)
		return (0);
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	sum = a + b;

	printf("%d + %d = %d\n", a, b, sum);

	return (a + b);
}
