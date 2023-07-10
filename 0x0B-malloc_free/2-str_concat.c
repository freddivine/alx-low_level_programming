#include "main.h"
#include <string.h>

/**
 * str_concat - allocates memory and concatenate to memory
 * @s1: first string
 * @s2: second string
 * Return: returns char value
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t s1_len = s1 ? strlen(s1) : 0;
	size_t s2_len = s2 ? strlen(s2) : 0;

	result = malloc(s1_len + s2_len + 1);
	if (!result)
		return (NULL);

	if (s1)
		memcpy(result, s1, s1_len);
	if (s2)
		memcpy(result + s1_len, s2, s2_len);

	result[s1_len + s2_len] = '\0';

	return (result);
}
