#include "main.h"

/**
 * fork_function - creates a child process
 * @buffer: executes a command
 * this function call the fork system call
 * exit terminates the program, if fork or execution fail
 * stderr is printed
 *
 */

void fork_function(char *buffer)
{


	buffer[strcspn(buffer, "\n")] = '\0';
	if (strcmp(buffer, "exit") == 0)
	{
		printf("Disconnecting...!\n");
		exit(EXIT_SUCCESS);
	}

	pid_t pid = fork();

	if (pid < 0)
	{
		fprintf(stderr, "fork failed");
	}

	else if (pid == 0)
	{
		execlp(buffer, buffer, NULL);
		fprintf(stderr, "'%s' command not found", buffer);
		exit(EXIT_FAILURE);
	}

	else
	{
	int status;

	waitpid(pid, &status, 0);
	}
}
