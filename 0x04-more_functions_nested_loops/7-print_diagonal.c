#include "main.h"

/**
 * print_diagonal - drawing a diagonal line on terminal.
 *@n: Parameter type integer.
 *Return: void.
 */

void print_diagonal(int n)
{
	int nline = 0;
	int space;

	while (nline < n)
	{
		if (n > 0)
		{
			space = 0;

			while (space < nline)
			{
				_putchar(' ');
				space++;
			}
			_putchar(92);
			_putchar('\n');
			nline++;
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}

	}
}
