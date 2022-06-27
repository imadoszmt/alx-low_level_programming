#include "main.h"

/**
 * print_number - function that print an integer.
 * @n: integer inputed.
 *
 */

void print_number(int n)
{
	if (n <= 9)
		_putchar('0' + n);
	else if (n >= 10 && n <= 99)
	{
		if (n < 0)
		{
			n = -n
			_putchar('-');
		}
		else
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + (n % 10));
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + (n / 100) % 10);
		_putchar('0' + (n % 100) / 10);
		_putchar('0' + (n / 10));
	}
