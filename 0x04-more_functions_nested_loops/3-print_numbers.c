include "main.h"

/**
 * print_numbers - A function that print from 0 to 9.
 *
 * Return: 0 (Success)
 */

void print(void)
{
	char c = '0';
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	return (0);
}
