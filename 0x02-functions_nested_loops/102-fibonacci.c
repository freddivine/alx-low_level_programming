#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	int n = 50;

	int sequence[n];

	sequence[0] = 1;

	sequence[1] = 2;

	printf("%d, %d", sequence[0], sequence[1]);

	for (int i = 2; i < n; i++)
	{
		sequence[i] = sequence[i - 1] + sequence[i - 2];
		printf(", %d", sequence[i]);
	}

	return (0);
}
