#include "main.h"
#include <ctype.h>

/**
 * _islower - defines islower
 * @c: the character to print
 * Return: return 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);

	else
		return (0);
}
