#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * c: character
 * i: integer
 * f: float
 * s: char *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list argm;
	unsigned int i = 0;
	char c;
	int j;
	float floating_point;
	char *str1;
	char *separator = "";

	va_start(argm, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(argm, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				j = va_arg(argm, int);
				printf("%s%d", separator, j);
				break;
			case 'f':
				floating_point = (float) va_arg(argm, double);
				printf("%s%f", separator, floating_point);
				break;
			case 's':
				str1 = va_arg(argm, char *);
				printf("%s%s", separator, (str1 != NULL) ? str1 : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(argm);
	printf("\n");
}
