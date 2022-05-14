#include "main.h"

/**
 * array_range - save in a new array the numbers between min and max
 * @min: number initial
 * @max: number max posible
 * Return: Return array with numbers between min and max
 */
int *array_range(int min, int max)
{
	int countNumbers, i;
	int *numbersBetween;

	if (min > max)
		return (NULL);

	countNumbers = max - min + 1;
	numbersBetween = malloc(sizeof(int) * countNumbers);
	if (numbersBetween == NULL)
	{
		free(numbersBetween);
		return (NULL);
	}

	for (i = 0; i < countNumbers; i++)
	{
		numbersBetween[i] = min;
		min++;
	}
	return (numbersBetween);
}
