#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int rows;

	printf("Enter The Number of Rows : ");
	scanf("%d", &rows);

	for (int i = rows; i >= 1; i--)
	{
		for (int j = 1; j <= rows - i; j++)
			printf(" ");

		for (int k = 1; k < 2 * i; k++)
			printf("♥");
		printf("\n");
	}
	return (0);
}
