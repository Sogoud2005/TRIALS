#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i = 0, flip;

	printf("Enter Flip Point : ");
	scanf("%d", &flip);

	for (i = 1; i <= flip; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("♥");
		}
		printf("\n");
	}
	for (i = flip; i > 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("♥");
		}
		printf("\n");
	}
	return (0);
}
