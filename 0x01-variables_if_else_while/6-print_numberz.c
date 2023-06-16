#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
