#ifndef _SHELL_H
#define _SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct list
{
	char *dir;
	struct list *next;
} list_t;

void execmd(char **argv);
char **path(char *PATH);
char *_getenv(const char *name);
int compare(char *a, char *b);
char **splitpath(void);
list_t *add_node(list_t **head, char *str);
void print_list(list_t *h);

#endif
