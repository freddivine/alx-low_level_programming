#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: amount of byte to be multiplied
 * Return: returns void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
