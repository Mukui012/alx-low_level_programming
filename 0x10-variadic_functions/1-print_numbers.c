#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers
  * @separator: points to string to be printed
  * @n: number of intergers passed to function
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argmnts;

	va_start(argmnts, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argmnts, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argmnts);
}
