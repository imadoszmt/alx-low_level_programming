#include "main.h"

/**
 * more_numbers - prints x10 from 0 to 14.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int line = 0, num;

	while (line <= 9)
	{
		num = 0;

		while (num <= 14)
		{
			if (num <= 9)
			{
				_putchar('0' + num);
				num++;
			}
			else if (num > 9)
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
				num++;
			}
		}
		_putchar('\n');
		line++;
	}

}
