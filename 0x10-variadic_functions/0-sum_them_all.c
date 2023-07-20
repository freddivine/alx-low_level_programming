
#include "variadic_functions.h"

/**
 * sum_them_all - sum all passed int arg and returns them
 * @n: fix arg that specifies the number of arg to pass
 * @...: unkown argument
 * Return: return int values
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum_all = 0;

	unsigned int i;

	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum_all += va_arg(ptr, int);

	return (sum_all);

	va_end(ptr);

	return (0);
}
