#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argment vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
