#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Entry point
 * @size: the size of the triangle
 * Return: return 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{

			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
