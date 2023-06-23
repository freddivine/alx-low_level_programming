#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Entry point
 * @c: parameter is checked
 * Return: return 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
