#include "main.h"

/**
 * times_table - A function that print the "9 times table".
 * Parameter: Void
 * Return: Void.
 */

void times_table(void)
{
	int n, n1;
	int N = n * n1;

	for (n = 0; n <= 9; n++)
	{
		for (n1 = 0; n1 <= 9; n1++)
		{

			if (n1 == 0)
			{
				_putchar('0' + N);
			}
			else if (N <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + N);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (N / 10));
				_putchar('0' + (N % 10));
			}
		}
		_putchar('\n');
	}
}
