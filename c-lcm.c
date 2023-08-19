#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i, j, lcm;

	printf("Enter the 1st number : ");
	scanf("%d", &i);

	printf("Enter the 2nd number : ");
	scanf("%d", &j);

	lcm = (i > j) ? i : j;

	while (1)
	{
			if (lcm % i == 0 && lcm % j == 0)
			{
				printf("The LCM of %d and %d = %d\n", i, j, lcm);
				break;
			}
		++lcm;
	}
	return (0);
}
