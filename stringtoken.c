#include "main.h"

/**
 * custom_strtok - tokenize a string using delim.
 * @input: the string to be tokenized
 *
 * Return: a pointer to the string
 */

char *custom_strtok(char *input)
{
	char *str = input;
	char *delim = " ";
	char *token = strtok(str, delim);

	while (token)
	{
		printf("%s", token);
		token = strtok(NULL, delim);
	}

	return (str);
}
