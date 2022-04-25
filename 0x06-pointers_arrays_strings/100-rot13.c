#include "main.h"

/**
 * rot13 - change letter in convertion ROT13
 * @cc: Chain of characters to convert
 * Return: Return chain of characters modified
 */
char *rot13(char *cc)
{
	int i, j;

	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; cc[i]; i++)
	{
		for (j = 0; normal[j]; j++)
		{
			if (cc[i] == normal[j])
			{
				cc[i] = rot13[j];
				break;
			}
		}
	}
	return (cc);
}
