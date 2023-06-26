#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);

	n = -4096;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);

	n = INT_MIN;
	n = INT_MAX / n;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
