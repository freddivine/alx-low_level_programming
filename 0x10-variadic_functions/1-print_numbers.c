#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints unkown amount of numbers
 * @separator: comms
 * @n: fixed argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int num;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
