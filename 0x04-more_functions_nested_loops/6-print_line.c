#include "main.h"

/**
 * print_line - printing straight line in the terminal.
 * @n: Parameter type integer.
 * Return: void.
 */

void print_line(int n)
{
	int m = 0;
	while (m <= n)
	{
		if (n > 0)
		{
			_putchar('_');
			m++;
		}
		else if (n < 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
