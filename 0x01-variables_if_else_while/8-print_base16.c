#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	char numstr[30] = "0123456789abcdef";

	int i = 0;

	while (numstr[i] != '\0')
	{
		putchar(numstr[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
