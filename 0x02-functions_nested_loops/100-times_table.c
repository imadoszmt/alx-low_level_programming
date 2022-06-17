#include "main.h"

/**
 * print_times_table - A function that print times table of "n".
 * @n: A parameter type integer.
 * Return: Void.
 */

void print_times_table(int n)
{
	int n1;
	int N;

	if ((n != 0) || (n != 15)
	{
		for (n = 0; n <= n; n++)
		{
			for (n1 = 0; n1 <= n; n1++)
			{
				N = n * n1;
				if (n1 == 0)
				{
					_putchar('0' + N)
				}
				else if (N <= n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + N);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (N / 10));
					_putchar('0' + (N % 10));
				}
			}
			_putchar('\n');
		}
	}

}
