#include "shell.h"

void print_list(list_t *h)
{
	while (h)
	{
		if (!h->dir)
		{
			printf("NULL\n");
		}
		else
		{
			printf("%s\n", h->dir);
		}
		h = h->next;
	}
}
