#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints its name.
 * @argc: number of argument on the commed-line prompt.
 * @argv: an array of stings that hold the-line arguments.
 *
 * Return: Exit status, an integer.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
