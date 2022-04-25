#include "main.h"

/**
 * print_buffer - function called to main()
 * @b: char
 * @size: int
 * Return: withour return
 */
void print_buffer(char *b, int size)
{
	int hex = 0;
	int i, j, k;

	if (size == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size;)
	{
		printf("%08x: ", hex);

		for (j = i; j < (i + 10); j++)
		{
			if (j >= size)
				printf("  ");
			else
				printf("%02x", b[j]);
			if ((j % 2) != 0 && j != 0)
				printf(" ");
		}
		for (k = i; k < (i + 10); k++)
		{
			if (k >= size)
				break;
			else if (b[k] > 30 && b[k] < 127)
				printf("%c", b[k]);
			else
				printf(".");
		}
		i += 10;
		hex += 10;
		if (i < size)
			printf("\n");
	}
	printf("\n");
}
