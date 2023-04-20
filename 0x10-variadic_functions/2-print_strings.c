#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: string to be printed
 * @n: num of strings passed to function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argm;
	char *str1;

	va_start(argm, n);

	for (i = 0; i < n; i++)
	{
		str1 = va_arg(argm, char *);
		printf("%s", str1 != NULL ? str1 : "(nil)");

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(argm);
	printf("\n");
}
