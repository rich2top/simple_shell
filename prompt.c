#include "main.h"

/**
 * shell_prompt - it displays the prompt on the screen
 * it accepts inputs too
 */

void shell_prompt(void)
{
	char buffer[BUFFER_SIZE];

	while (1)
	{
		char prompt[] = "SHELL$: ";

		write(1, prompt, 8);

		char *input = custom_getline_function();

		strcpy(buffer, input);
		strtok(input, " ");

		fork_function(input);
		free(input);
	}
}
