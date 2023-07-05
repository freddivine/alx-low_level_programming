#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - Entry point
 * @x: param to be returned
 * @y: param to be raised with
 * Return: returns x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y -1));
}
