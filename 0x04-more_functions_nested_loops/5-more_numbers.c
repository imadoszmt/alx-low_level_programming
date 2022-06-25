#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int lines;
	char num;

	lines = 0;

	while (lines <= 9)
	{
		num = '0';

		while (num <= 14)
		{
			if (num <= 9)
			{
				_putchar('0' + num);
			}
			else if (num > 9)
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
			num++;
		}
		lines++;
		_putchar('\n');
	}
}
