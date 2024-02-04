#include <stdio.h>

/**
 * main - A function that print all arguments it receives on the prompt.
 * @argc: the arguments counter.
 * @argv: an array of string that hold the provided arguments.
 *
 * Return: Exit status, an integer.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
