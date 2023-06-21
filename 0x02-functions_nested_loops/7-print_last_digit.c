#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: print last digit
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 10)
		n = -n;

	last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);

}
