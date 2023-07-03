#include "main.h"
/**
 * _memset - Entry point
 * @s: pointer to be filled
 * @b: constant byte value that will be used to fill the memory
 * @n: to be filled with constant byte value
 * Return: return pointer
 */
char *_memset(char *s, char b, unsigned int n){
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
