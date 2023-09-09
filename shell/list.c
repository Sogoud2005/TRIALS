#include "shell.h"

char **splitpath(void)
{
	char **av;
	char *path = NULL, *pathcpy = NULL, *token;
	int i = 0, t = 0;

	path = getenv("PATH");

	if (path == NULL)
	{
		printf("ERROR\n");
		return (NULL);
	}

		pathcpy = malloc(sizeof(char) * strlen(path));

	if (pathcpy == NULL)
	{
		printf("ERROR\n");
                return (NULL);
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

		token = strtok(NULL, ":");
	}
	av[i] = NULL;

	free(pathcpy);

	return (av);
}

list_t *add_node(list_t **head, char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new == NULL || str == NULL)
		return (NULL);

	new->dir = str;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}

int main(void)
{
	char **av;
	list_t *path = NULL;
	int i = 0;

	av = splitpath();

	for (i = 0; av[i] != NULL; i++)
	{
		add_node(&path, av[i]);
	}
	print_list(path);

	return (0);
}
