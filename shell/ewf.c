#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	pid_t child_pid;
	int i, status;
	extern char **environ;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 1; i < 6; i++)
	{
		printf("New child created\n");
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Error pid");
			exit(98);
		}
		else if (child_pid > 0)
		{
			wait(&status);
		}
		else
			exit(98);
	}
	if (execve(argv[0], argv, environ) == -1)
	{
		perror("Error f ");
		return (-1);
	}
		
	return (0);
}
