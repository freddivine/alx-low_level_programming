#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	char temp;

	int len = 0;

	int i;

	while (*(s + len) != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
	}
}
