#include "main.h"

/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	char p[30] = "_putchar";

	int i = 0;

	while (p[30] != '\0')
	{
		_putchar(p[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
