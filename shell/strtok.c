#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

char **split(char **av)
{
	int i = 1, t = 0, c = 0, ac = 0;
	char *token;
	char **str = NULL, **cpy = NULL, **av1 = NULL;

	while (av[i] != NULL)
	{
		ac++;
		i++;
	}
	ac++;

	str = malloc(sizeof(char *) * ac);
	cpy = malloc(sizeof(char *) * ac);

	int a = 1;

	for (c = 0; av[a] != NULL; a++, c++)
	{
		str[c] = malloc(sizeof(char) * strlen(av[a]));

		strcpy(str[c], av[a]);

		cpy[c] = malloc(sizeof(char) * strlen(av[a]));

		strcpy(cpy[c], av[a]);
	}
	str[c] = NULL;
	cpy[c] = NULL;

	int b = 0;

	while (cpy[b])
	{
		token = strtok(cpy[b], " ");

		while (token != NULL)
		{
			t++;
			token = strtok(NULL, " ");
		}
		t++;
		b++;
	}

	av1 = malloc(sizeof(char *) * t);

	i = 0;

	for (i = 0; str[i] != NULL; i++)
	{
		token = strtok(str[i], " ");

		av1[i] = malloc(sizeof(char) * strlen(token));

		strcpy(av1[i], token);

		token = strtok(NULL, " ");
	}
	av1[i] = NULL;

	return (av1);
}

int main(int ac, char **av)
{
	char **v;
	int i = 0;

	v = split(av);

	while (v[i])
	{
		printf("%s%s", v[i], v[i + 1] ? " " : "\n");
		i++;
	}

	return (0);
}
