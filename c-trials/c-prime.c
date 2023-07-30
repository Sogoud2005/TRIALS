#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i;

	printf("Please, enter a number : \n");

	scanf("%d", &i);

	if (i < 0)
                {
                        printf("[[ERROR]] negative numbers cannot be prime\n");
                        return (-1);
                }

	int flag = 1;

	for (int j = 2; j <= i / 2; j++) 
	{
		if (i % j == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		printf("The number %d is prime.\n", i);
	else
		printf("The number %d is not prime.\n", i);
	return (0);
}
