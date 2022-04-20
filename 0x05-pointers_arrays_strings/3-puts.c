#include "main.h"

/**
 * The function puts() writes the string s, and a terminating newline character, to the stream stdout.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
