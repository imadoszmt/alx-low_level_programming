#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that the minimum number of coins to make change for an
 * amount of money provided as argument.
 * @argc: number of arguments provided in the command-line.
 * @argv: an array of string hold the provided arguments.
 *
 * Return: 0 if succes, otherwise 1.
 */

int main(int argc, char *argv[])
{
	int counter = 0;
	int value = 0;
	int coins [] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("0\n");
		return (1);
	}

	if (argc == 2)
	{
		int i;

		for (i = 0; i <= 4; i++)
		{
			while (value >= coins[i])
			{
				value = value - coins[i];
				counter++;
			}
		}
		printf("%i\n", counter);

	}
	return (0);

}
