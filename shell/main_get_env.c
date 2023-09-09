#include "shell.h"

int main(void)
{
        char *name = NULL, *token;
        size_t i = 0;
        ssize_t b;

        printf("$");
        b = getline(&name, &i, stdin);

        if (b == -1)
                return (-1);

        token = strtok(name, "\n");

        _getenv(token);

        return (0);
}
