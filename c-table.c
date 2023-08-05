#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num, range, i = 1;

	printf("Enter the number to multiply :");
	scanf("%d", &num);

	printf("Enter the range : ");
	scanf("%d", &range);

	for (; i <= range; i++)
	{
		printf("%d x %d = %d\n", num, i, i * num);
	}
	return (0);
}
