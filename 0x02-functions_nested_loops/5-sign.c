#include "main.h"
#include <ctype.h>

/**
 * print_sign - defines print_sign
 * @n: print n to stdout
 * Return: return 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
