#include <stdio.h>

/**
 * main - initializing main function
 * Return: returns 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(c));

	printf("size of an int: %lu byte(s)\n", sizeof(i));

	printf("size of a long int: %lu byte(s)\n", sizeof(li));

	printf("size of a long long int: %lu byte(s)\n", sizeof(lli));

	printf("size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
