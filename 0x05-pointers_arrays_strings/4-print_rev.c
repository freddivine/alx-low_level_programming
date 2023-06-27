#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to print
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (*(s + len) != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		write(STDOUT_FILENO, &*(s + i), 1);

	write(STDOUT_FILENO, "\n", 1);
}
