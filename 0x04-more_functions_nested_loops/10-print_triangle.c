#include "main.h"

/**
 * print_triangle - Printing a traingle.
 * @size: Parameter type integer.
 * Return: Void.
 */

void print_triangle(int size)
{
	int nline, nhash, nspace;

	nline = 0;

	while (nline < size)
	{
		nspace = 1;

		while (nspace < size - nline)
		{
			_putchar(' ');
			nspace++;
		}

		nhash = 0;

		while (nhash <= nline)
		{
			_putchar('#');
			nspace++;
		}

	}
	_putchar('\n');
	nline++;

}
