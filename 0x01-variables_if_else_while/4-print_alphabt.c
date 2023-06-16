#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	char mys[30] = "abcdfghijklmnoprstuvwxyz";

	int i = 0;

	while (mys[i] != '\0')
	{
		putchar(mys[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
