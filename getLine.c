#include "main.h"

/**
 * custom_getline_function - reads a line of inputs from the stdin.
 * Return: A pointer to the allocated buffer
 *	returns NULL on failure or when when input ends.
 *
 */

char *custom_getline_function()
{
	char *buff = NULL;
	size_t n = 0;

	getline(&buff, &n, stdin);

	return (buff);
}
