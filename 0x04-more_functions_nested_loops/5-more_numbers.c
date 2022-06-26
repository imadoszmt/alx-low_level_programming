#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14
 *
 */

void more_numbers(void)
{
	int lines, num;

	lines = 0;
	while (lines <= 9)
	{
		num = 0;
		while (num <= 14)
		{
			if (num <= 9)
				_putchar(48 + num);

			else if (num > 9)
			{
				_putchar(48 + (num / 10));
				_putchar(48 + (num % 10));
			}
			num++;
		}
		lines++;
		_putchar('\n');
	}
}
