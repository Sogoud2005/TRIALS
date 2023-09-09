#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "shell.h"

int main(void)
{
	char *str = NULL, *cpystr = NULL, *token, *tok;
	int i = 0, t = 0, result;
	size_t n = 0;
	struct stat st;
	ssize_t b, status;
	char **argv;

	printf("$ ");

	b = getline(&str, &n, stdin);

	if (b == -1)
	{
		perror("Error ");
		free(str);
		return (-1);
	}

	cpystr = malloc(sizeof(char) * b);

	if (cpystr == NULL)
	{
		perror("Error ");
		return (-1);
	}

	strcpy(cpystr, str);

	token = strtok(cpystr, " ");

	while (token != NULL)
	{
		t++;
		token = strtok(NULL, " ");
	}
	t++;

	argv = malloc(sizeof(char *) * t);

	token = strtok(str, " ");

	for (i = 0; token != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);

		token = strtok(NULL, " ");
	}
	argv[i] = NULL;

	result = strcmp(argv[0], "_which");

	if (!argv[1] || result != 0)
	{
		printf("Usage: _which filename ...\n");
		return (-1);
	}

	else if (argv[2])
                {
                        printf("Only one file allowed\n");
                        return (0);
                }

	tok = strtok(argv[1], "\n");

	printf("%s\n", tok);
	
	free(cpystr);
	free(str);

	status = stat(tok, &st);

	if (status == 0)
	{
		printf("%s:FOUND\n", tok);
	}
	else
	{
		printf("%s:NOT FOUND\n", tok);
	}

	return (0);
}
