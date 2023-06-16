#include <stdio.h>
/**
 * main - Entry point
 * Return: rdturn 0
 */

int main(void)
{

	char alpha[30] = "zyxwvutsrqponmlkjihgfedcba";

	int i;

	i = 0;

	while (alpha[i] != '\0')
	{
		putchar(alpha[i]);

		i++;
	}

	putchar('\n');

	return (0);
}
