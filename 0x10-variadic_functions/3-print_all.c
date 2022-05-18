#include "variadic_functions.h"

/**
 * print_all - print all types, int, char, char *, float.
 * @format: characters to reroll to know that print.
 * Return: without return.
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *value, *concatenator = "";

	va_list listArgs;

	va_start(listArgs, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", concatenator, va_arg(listArgs, int));
				break;
			case 'i':
				printf("%s%d", concatenator, va_arg(listArgs, int));
				break;
			case 'f':
				printf("%s%f", concatenator, va_arg(listArgs, double));
				break;
			case 's':
				value = va_arg(listArgs, char *);
				if (value == NULL)
					value = "(nil)";
				printf("%s%s", concatenator, value);
				break;
			default:
				i++;
				continue;
			}
			concatenator = ", ";
			i++;
		}
	}
	va_end(listArgs);
	printf("\n");
}
