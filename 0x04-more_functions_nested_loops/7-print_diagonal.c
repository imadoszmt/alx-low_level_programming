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

	if (n > 0)
	{
		while (nline < n)
		{
			space = 0;

			while (space < nline)
			{
				_putchar(' ');
				space++;
			}
			_putchar(92);
			nline++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
