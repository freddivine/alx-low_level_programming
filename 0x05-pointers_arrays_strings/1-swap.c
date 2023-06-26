#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: to be swaped with value of b
 * @b: to be swaped with value of a
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;

	d = *b;

	*a = d;

	*b = d;
}
