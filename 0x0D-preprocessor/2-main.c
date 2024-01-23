#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled
 * from.
 *
 * Return: 0 (Success)
 */

#define _putchar putchar
int main(void)
{
	char *program_name = __FILE__;

	while (*program_name)
	{
		_putchar(*program_name);
		program_name++;
	}
	_putchar('\n');
	return (0);
}

