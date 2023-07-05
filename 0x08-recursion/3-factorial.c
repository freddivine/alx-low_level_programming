#include "main.h"
#include <stdio.h>
/**
 * factorial - Entry point
 * @n: number of factorial
 * Return: returns factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

	printf("%d", factorial(n));
	return (0);
}
