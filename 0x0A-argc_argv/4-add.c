#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a function that add integer provided in the command-line
 * @argc: the number of arguments on the prompt.
 * @argv: an array of string holding arguments.
 *
 * Return: 0 if succes, otherwise 1.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int digit = 0;

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		digit = atoi(argv[i]);
		sum = sum + digit;
	}
	printf("%i\n", sum);
	return (0);
}
