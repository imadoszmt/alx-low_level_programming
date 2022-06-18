#include "main.h"
/**
 * print_times_table - A function that print times table of "n".
 * @n: A parameter type integer.
 * Return: Void.
 */
void print_times_table(int n)
{
	int n1, n2, N;

	if (n >= 0 && n < 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			for (n2 = 0; n2 <= n; n2++)
			{
				N = n1 * n2;
				if (n2 == 0)
					_putchar('0' + N);
				else if (N < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + N);
				}
				else if (N >= 10 && N <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (N / 10));
					_putchar('0' + (N % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (N / 100));
					_putchar('0' + ((N % 100) / 10));
					_putchar('0' + (N % 10));
				}
			}
			_putchar('\n');
		}
	}
}
