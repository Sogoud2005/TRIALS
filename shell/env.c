#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av, char **env)
{
	extern char **environ;

	(void)ac;
	(void)av;

	printf("%p\n", &env);
	printf("%p\n", &environ);

	return (0);
}
