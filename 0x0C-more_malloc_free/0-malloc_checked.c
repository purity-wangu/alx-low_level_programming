#include "main.h"

/**
 * malloc_checked - Creation new size of memory with malloc
 * @b: size in memory
 * Return: pointer to new size in memory
 */
void *malloc_checked(unsigned int b)
{
	void *newMemory = malloc(b);

	if (newMemory == NULL)
	{
		exit(98);
	}
	return (newMemory);
}
