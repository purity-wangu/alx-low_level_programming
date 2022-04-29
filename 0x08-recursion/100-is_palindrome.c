#include "main.h"

/**
 * search_palindrome - search if the chain is palindrome
 * @string: chain
 * @i: size of chain
 * @i1: middle to chain
 * @j: increment
 * Return: 1 or 0
 */
int search_palindrome(char *string, int i, int i1, int j)
{
	if (string[i1 + j])
	{

		if (i % 2 == 0)
		{
			if (string[i1 - j] != string[i1 + j + 1])
			{
				return (0);
			}
			else
			{
				j++;
				search_palindrome(string, i, i1, j);
				return (1);
			}
		}
		else
		{
			if (string[i1 - j - 1] != string[i1 + j + 1])
			{
				return (0);
			}
			else
			{
				j++;
				search_palindrome(string, i, i1, j);
				return (1);
			}
		}
	}
	else if (string[0] == '\0')
	{
		return (1);
	}
	return (-1);
}

/**
 * size_chain - search the size of the chain
 * @s: Chain
 * @i: increment
 * Return: size of chain
 */
int size_chain(char *s, int i)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	else
	{
		i++;
		return (size_chain(s, i));
	}
}

/**
 * is_palindrome - send the char * to function search_palindrome()
 * @s: Chain of characters
 * Return: 1 to palindrome or 0 to not palindrome.
 */
int is_palindrome(char *s)
{
	int i = 0, i1, j = 0, resultPalindrome;

	i = size_chain(s, i);
	if (i % 2 == 0)
	{
		i1 = (i / 2) - 1;
	}
	else
	{
		i1 = (i / 2);
	}

	resultPalindrome = search_palindrome(s, i, i1, j);
	return (resultPalindrome);
}
