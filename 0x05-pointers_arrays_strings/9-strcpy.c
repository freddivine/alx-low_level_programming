#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcpy - copies string
 * @dest: pointer to receive src
 * @src: pointer to copy
 * Return: return c
 */
char *_strcpy(char *dest, char *src)
{
	char *c;

	c = strcpy(dest, src);

	return (c);
}
