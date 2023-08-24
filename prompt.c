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

		input[strcspn(input, "\n")] = '\0';

		if (input[0] == '\0')
		{
			free(input);
			continue;
		}


		fork_function(input);
		free(input);
	}
}
