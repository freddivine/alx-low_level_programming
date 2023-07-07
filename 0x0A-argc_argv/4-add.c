#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: returns 1 if failed otherwise returns 0
 */
int main(int argc, char *argv[])
{
	int i, s, j, sum = 0;

	if (argv == NULL)
		printf("0");

	for (s = 1; s < argc; s++)
	{
		for (j = 0; j < (int) strlen(argv[s]); j++)
		{
			if (argv[s][j] >= 'a' && argv[s][j] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);


	printf("%d\n", sum);
	return (0);
}
