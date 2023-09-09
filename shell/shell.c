#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "shell.h"

void execmd(char **argv)
{
	extern char **environ;

	if (argv)
	{
		if (execve(argv[0], argv, environ) == -1)
		{
			printf("Error\n");
		}
	}
}

int main(void)
{
	char *token, *lptr = NULL, *lptrcopy = NULL;
	char **argv;
	size_t n = 0;
	ssize_t nchar;
	int i, t = 0;
	char *delim = "\n";

	while (1)
	{
		printf("#cisfun$ ");

		nchar = getline(&lptr, &n, stdin);

		if (nchar == -1)
		{
			printf("Exiting Shell...... Error ");
			exit(0);
		}
		
		lptrcopy = malloc(sizeof(char) * nchar);

		if (lptrcopy == NULL)
		{
			perror("Error ");
			exit(1);
		}

		strcpy(lptrcopy, lptr);

		token = strtok(lptrcopy, delim);

		while (token != NULL)
		{
			t++;
			token = strtok(NULL, delim);
		}
		t++;

		argv = malloc(sizeof(char *) * t);

		token = strtok(lptr, delim);

		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[i], token);

			token = strtok(NULL, delim);
		}
		argv[i] = NULL;

		execmd(argv);

	}
	free(lptr);
	free(lptrcopy);

	return (0);
}



