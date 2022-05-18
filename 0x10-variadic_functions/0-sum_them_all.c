#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum all parameters
 * @n: number of parameters
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i = 0;
		int sumAll = 0;

		va_list listParams;

		va_start(listParams, n);
		for (i = 0; i < n; i++)
			sumAll += va_param(listParams, int);

		va_end(listParams);
		return (sumAll);
	}
	return (0);
}
