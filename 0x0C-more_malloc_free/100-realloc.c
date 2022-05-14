#include "main.h"

/**
 * _realloc - reallocate new size of memory
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to new size of memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newSizeMemory;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newSizeMemory = malloc(new_size);
	if (newSizeMemory == NULL)
	{
		free(ptr);
		free(newSizeMemory);
		return (NULL);
	}
	free(ptr);
	return (newSizeMemory);
}
