#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to get the bit.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dog = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	dog <<= index;

	if ((n & dog) == 0)
		return (0);
	else
		return (1);
}
