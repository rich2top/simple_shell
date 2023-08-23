#include "main.h"

/*
 * main - this funtion call the prompt and print with loop
 */

void fork_function()
{
	char buffer[BUFFER_SIZE];

	if(fgets, (buffer, BUFFER_SIZE, stdin) == NULL)
	{
	printf("DIsconnecting...");
	}

	buffer[strcspn(buffer, "\n")] = '\0';
	pid_t pid = fork();

	if (pid < 0)
	{
		fprintf(stderr, "fork failed");
	}

	else if (pid = 0)
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
