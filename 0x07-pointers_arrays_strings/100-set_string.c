#include "main.h"

/**
 * set_string - save char* in char**
 * @s: char  type **
 * @to: char type *
 * Return: Without return.
 */
void set_string(char **s, char *to)
{
	*s = (char *) to;
}
