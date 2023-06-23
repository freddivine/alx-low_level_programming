#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry point
 * Return: return 0
 */
void more_numbers(void)
{
	int n, j;

	n = 0;

	while (n <= 10)
	{
		j = 0;

		while (j <= 14)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');

		n++;
	}
}
