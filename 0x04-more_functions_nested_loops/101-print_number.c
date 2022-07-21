#include "main.h"

/**
 * print_number - function that print an integer.
 * @n: integer inputed.
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;

		_putchar('-');
	}
	else
		n = n;
	while (n / 10)
	{
		if (n / 10 <= 9)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			break;
		}
		else if (n / 100 <= 9)
		{
			_putchar('0' + (n / 100));
			_putchar('0' + (n % 100) / 10);
			_putchar('0' + (n % 10));
			break;
		}
		else if (n / 1000 <= 9)
		{
			_putchar('0' + (n / 1000));
			_putchar('0' + (n % 1000) / 100);
			_putchar('0' + (n % 100) / 10);
			_putchar('0' + (n % 10));
			break;
		}
		else if (n == 0)
		{	
			_putchar('0' + n);
			break;
		}
	}
}
