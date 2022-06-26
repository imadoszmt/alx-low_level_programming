#include "main.h"
/**
 * print_triangle - Printing a triangle.
 * @size: size of triangle.
 *
 */
void print_triangle(int size)
{
	int nline; 
	int nhash; 
	int nspace;

	if (size > 0)
	{
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
