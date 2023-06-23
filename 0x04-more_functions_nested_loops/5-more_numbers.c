#include "main.h"

/**
 * more_numbers - entry point
 */
void more_numbers(void)
{
	int t, i;

	t = 0;

	while (t <= 10)
	{
		i = 0;

		while (i <= 14)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');

		t++;
	}
}
