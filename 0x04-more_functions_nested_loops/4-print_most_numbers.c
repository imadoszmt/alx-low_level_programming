#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9,except 2 and 4.
 *
 * Return: Void.
 */

void print_most_numbers(void)
{
	char c;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
		{
			_putchar('0' + c);
		}
		c++;
	}
	_putchar('\n');
}
