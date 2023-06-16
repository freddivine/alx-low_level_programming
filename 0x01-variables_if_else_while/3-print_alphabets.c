#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{

	char mys[30] = "abcdefghijklmnopqrstuvwxyz";

	char mysj[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i, j;

	i = 0;

	j = 0;

	while (mys[i] != '\0')
	{
		putchar(mys[i]);
		i++;
	}

	while (mysj[j] != '\0')
	{
		putchar(mysj[j]);
		j++;
	}

	putchar('\n');

	return (0);
}
