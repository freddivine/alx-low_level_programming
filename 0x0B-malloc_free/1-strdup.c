#include "main.h"
#include <string.h>

/**
 * _strdup - copies and return a pointer
 * @str: pointer to return
 * Return: returns char value
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;

	new_str = malloc(len);

	if (new_str == NULL)
	{
		return (NULL);
	}

	memcpy(new_str, str, len);
	return (new_str);
}
