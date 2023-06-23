#include "main.h"
/**
 * print_line - Entry point
 * @n: number of times to the underscore
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}