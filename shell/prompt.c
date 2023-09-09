#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	ssize_t b;
	char *str;
	size_t n = 50;

	printf("$ ");
	b = getline(&str, &n, stdin);

	if (b == -1)
	{
		printf("ERROR\n");
		free(str);
		return (-1);
	}

	printf("%s", str);

	free(str);
	return (0);
}
