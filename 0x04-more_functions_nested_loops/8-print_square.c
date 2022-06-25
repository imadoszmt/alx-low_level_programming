#include "main.h"

/**
 * print_square.c - Print a square.
 * @size: Parameter type integer.
 * Return: Void
 */

void print_square(int size)
{
	int nline, nhash;
	nline = 0;

	if (size > 0)
	{
		while (nline < size)
		{
			nhash = 0;
			while (nhash < size)
			{
				_putchar('#');
				nhash++;
			}
		_putchar('\n');
		nline++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
