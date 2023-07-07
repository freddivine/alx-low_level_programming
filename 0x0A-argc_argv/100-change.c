#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: returns int value
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int total_coins = 0;
	int cents, i;
	int num_this_coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins && cents > 0; i++)
	{
		num_this_coin = cents / coins[i];
		total_coins += num_this_coin;
		cents -= num_this_coin * coins[i];
	}

	printf("%d\n", total_coins);

	return (0);
}
