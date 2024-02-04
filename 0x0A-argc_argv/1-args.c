#include <stdio.h>

/**
 * main - a function that print the number of arguments passed into
 * the program.
 * @argc: number of arguments passed into the prompt.
 * @argv: an of string that hold the argument passed into the commend-line.
 *
 * Return: Exit status, an integer.
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	int i;
	(void)argv;

	for (i = 1; i < argc; i++)
	{
		counter++;
	}
	printf("%i\n", counter);
	return (0);
}
