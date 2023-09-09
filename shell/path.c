#include "shell.h"

int main(void)
{
	char *path, *pathcpy = NULL, *token;
	int t = 0, i = 0;
	char **av;

	path = getenv("PATH");

	if (path == NULL)
	{
		printf("ERROR\n");
		return (-1);
	}

	pathcpy = malloc(sizeof(char) * strlen(path));

	if (pathcpy == NULL)
	{
		printf("ERROR\n");
                return (-1);
	}

	strcpy(pathcpy, path);

	token = strtok(pathcpy, ":");

	while (token != NULL)
	{
		t++;
		token = strtok(NULL, ":");
	}
	t++;

	token = strtok(path, ":");

	av = malloc(sizeof(char *) * t);

	for (i = 0; token != NULL; i++)
	{
		av[i] = malloc(sizeof(char) * strlen(token));

		strcpy(av[i], token);

		printf("%s\n", av[i]);

		token = strtok(NULL, ":");
	}
	av[i] = NULL;

	free(pathcpy);

	return (0);
}
