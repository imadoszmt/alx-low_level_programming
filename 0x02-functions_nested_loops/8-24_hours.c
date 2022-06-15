#include "main.h"

/**
 * jack_bauer - A function that print every minute of the day.
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int min0, min1, sec0, sec1;

	for (min0 = 0; min0 <= 2; min0++)
	{
		for (min1 = 0; min1 <= 9; min1++)
		{

			for (sec0 = 0; sec0 <= 5; sec0++)
			{

				for (sec1 = 0; sec1 <= 9; sec1++)
				{
					if ((min0 != 2) && (min1 != 4))

					_putchar('0'+ min0);
					_putchar('0'+ min1);
					_putchar('0'+ sec0);
					_putchar('0'+ sec1);
				}

			}

		}

	}

}

