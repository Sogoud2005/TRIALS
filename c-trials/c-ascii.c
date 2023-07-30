#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char ascii[20];
	int i = 0;

	printf("Enter an ASCII value : ");

	scanf("%s", ascii);

	while (ascii[i] != '\0')
	{
		printf("The ASCII value of %c is %d\n", ascii[i], ascii[i]);
		i++;
	}

	return (0);
}
