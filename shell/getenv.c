#include "shell.h"
#include <string.h>
#include <stdbool.h>

char *rem(char *str, int pos)
{
	int i, len = strlen(str);
	char *new;

	if (pos >= len)
	{
		return (NULL);
	}
	for (i = pos; i < len; i++)
		str[i] = str[i + 1];
	return (str);
}


char *_getenv(const char *name)
{
	int i = 0, t = 0, env = 0;
	extern char **environ;
	char **av, **str = NULL, **str1 = NULL, **str2 = NULL, **av1;
	char *token, *delim = "=", *space = "";

	while (environ[i] != NULL)
	{
		env++;
		i++;
	}
	env++;

	str = malloc(sizeof(char *) * env);
	str1 = malloc(sizeof(char *) * env);

	for (i = 0; environ[i] != NULL; i++)
	{
		str[i] = malloc(sizeof(char) * strlen(environ[i]));

		strcpy(str[i], environ[i]);

		str1[i] = malloc(sizeof(char) * strlen(environ[i]));

		strcpy(str1[i], environ[i]);
	}
	str[i] = NULL;
	str1[i] = NULL;

	int d = 0;

	while (str[d])
	{
		token = strtok(str[d], delim);

		while (token != NULL)
		{
			t++;
			token = strtok(NULL, delim);
		}
		t++;
		d++;
	}

	av = malloc(sizeof(char *) * t);

	int e = 0;

	for (e = 0; str1[e] != NULL; e++)
	{
		token = strtok(str1[e], delim);
		av[e] = malloc(sizeof(char) * strlen(token));
		strcpy(av[e], token);

		token = strtok(NULL, delim);
	}
	av[e] = NULL;

	int j = 0;

	av1 = malloc(sizeof(char *) * t);

	for (j = 0; environ[j] != NULL; j++)
	{
		char *s = NULL;

		while (environ[j] != NULL)
		{
			s = rem(environ[j], 0);
			if (s[0] == 61)
			{
				break;
			}
		}
		s = rem(environ[j], 0);

		av1[j] = malloc(sizeof(char) * strlen(s));

		strcpy(av1[j], s);	
	}
	av1[j] = NULL;

	int f = 0;

	for (f = 0; av[f] != NULL; e++)
	{
		int value = 0, n = 0;

		while (name[n] != '\0' && av[f][n] != '\0')
		{
			if (name[n] != av[f][n])
			{
				value = 1;
				break;
			}
			n++;
		}
		if (value == 0)
		{
			printf("%s\n", av1[f]);
			return (av1[f]);
		}
		else
			f++;
	}
	printf("%s : NOT FOUND\n", name);
	return (NULL);
}
