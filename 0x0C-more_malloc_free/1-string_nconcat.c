#include "main.h"

/**
 * string_nconcat - created new array using malloc().
 * @s1: chain of chars one.
 * @s2: chain of chars two.
 * @n : number of chars to use of s2.
 * Return: new pointer with s1 and s2 added.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int j = 0;
	char *stringMalloc = "";

	if (s1)
		while (s1[i])
		{
			i++;
		}
	if (s2)
		while (s2[j] && j < n)
		{
			j++;
		}

	i += j;
	stringMalloc = malloc(sizeof(char) * i + 1);
	if (stringMalloc == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (s1)
		while (s1[i])
		{
			stringMalloc[i] = s1[i];
			i++;
		}
	j = 0;
	if (s2)
		while (s2[j] && j < n)
		{
			stringMalloc[i] = s2[j];
			i++;
			j++;
		}
	stringMalloc[i] = '\0';

	return (stringMalloc);
}
