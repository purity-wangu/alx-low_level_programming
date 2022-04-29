#include "main.h"

/**
 * wildcmp - recursion function
 * @s1: first chain of characters
 * @s2: second chain of characters
 * Return: 1 to sucess or 0 to failure.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
		{
			return (0);
		}
	}
	if (*s1 == *s2)
	{
		s1 = s1 + 1;
		s2 = s2 + 1;
		return (wildcmp(s1, s2));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			s2 = s2 + 1;
			return (wildcmp(s1, s2));
		}
		else if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		else
			return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
