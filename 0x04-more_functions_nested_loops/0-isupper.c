#include "main.h"
#include <ctype.h>
/**
 * _isupper - prints isupper
 * @c: parameter is checked
 * Return: return 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
