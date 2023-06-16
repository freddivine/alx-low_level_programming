#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	char mystr[30] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	while (mystr[i] != '\0')
	{
		putchar(mystr[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
