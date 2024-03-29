#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two numbers from the prompt.
 * @argc: the arguments counter.
 * @argv: an array of string contains the provided arguments.
 *
 * Return: Exit status, an integer.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%i\n", num1 * num2);
	return (0);
}
