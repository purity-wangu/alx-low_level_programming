#include "main.h"

/**
 * infinite_add - function
 * @n1: char 1
 * @n2: char 2
 * @r: char 3
 * @size_r: int 1
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, sumTemp, higher, temp1, temp2, add = 0;

	while (n1[i])
		i++;
	while (n2[j])
		j++;
	if (j >= i)
		higher = j;
	else
		higher = i;
	if (higher >= size_r - 1)
		return (0);
	r[higher + 1] = '\0';
	i--, j--, size_r--;
	temp1 = n1[i] - 48, temp2 = n2[j] - 48;
	while (higher >= 0)
	{
		sumTemp = temp1 + temp2 + add;
		add = (sumTemp >= 10 ? 1 : 0);
		r[higher] = (sumTemp > 0 ? (sumTemp % 10) + 48 : '0');
		i--;
		j--;
		temp1 = (i >= 0 ? n1[i] - 48 : 0);
		temp2 = (j >= 0 ? n2[j] - 48 : 0);
		higher--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
