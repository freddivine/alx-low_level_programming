#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("FIZZ");
		}

		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("BUZZ");
		}

		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FIZZBUZZ");
		}

		else if (i == 1)
		{
			printf("%d", i);
		}

		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
