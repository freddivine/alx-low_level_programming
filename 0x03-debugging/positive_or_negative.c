#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - initializing main funnction
 * @n: parameter to check
 * Return: return 0
 */
int positive_or_negative(int n)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%i is positve\n", n);
	}

	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}

	else
	{
		("%i is negative\n", n);
	}

	return (0);
}
