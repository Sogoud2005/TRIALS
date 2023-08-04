#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int l, w, A, P;

	if (argc != 3)
		return (0);

	l = atoi(argv[1]);
	w = atoi(argv[2]);

	A = l * w;
	P = 2 * (l + w);

	printf("The primeter of the Rectangle = %d length units\n", P);
	printf("The Area of the Rectangle = %d square units\n", A);

	return (1);
}
