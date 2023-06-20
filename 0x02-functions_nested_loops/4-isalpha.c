#include "main.h"
#include <ctype.h>

/**
 * _isalpha - defines isalpha
 * @c: prints c to stdout
 * Return: return 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);

	else
		return (0);
}
