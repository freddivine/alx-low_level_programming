#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	int i, j, h;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (h = j + 1; h < 10; h++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(h + '0');

				if (i != 7 || j != 8 || h != 9)
				{
					putchar(',');

					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
