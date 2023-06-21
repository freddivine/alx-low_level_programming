#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	int n = 98;

	int prev = 1;

	int current = 2;

	int next;

	printf("%d, %d", prev, current);

	for (int i = 3; i <= n; i++)
	{
		next = prev + current;
		printf(", %d", next);

		prev = current;

		current = next;
	}
	return (0);
}
