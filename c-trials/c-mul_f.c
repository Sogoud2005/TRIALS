#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int argc, char *argv[])
{
	float a, b, result;

	if (argc != 3)
	{
		printf("[[ERROR]] Wrong argument count\n");
		return (0);
	}

	a = atof(argv[1]);
	b = atof(argv[2]);

	result = a * b;

	printf("%.2f * %.2f = %.2f\n", a, b, result);
	return (a * b);
}
