#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i, n, rows;

	printf("Enter the number of rows : ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		for (n = 1; n <= rows - i; n++)
		{
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++)
		{
			printf("♥");
		}
		printf("\n");
	}
	return (0);
}
