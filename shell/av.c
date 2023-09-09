#include "main.h"

int main(int ac, char **av)
{
	int i = 1;

	(void)ac;

	if (!av[1])
	{
		printf("Usage: %s arg1 arg2 ...\n", av[0]);
		return (-1);
	}

	while (av[i])
	{
		printf("%s%s", av[i], (av[i + 1] ? " " : "\n"));
		i++;
	}
	return (0);
}
