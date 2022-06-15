#include "main.h"
#include <stdio.h>

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
		for (min1 = 0; min1 <= 3; min1++)
		{

			for (sec0 = 0; sec0 <= 5; sec0++)
			{

				for (sec1 = 0; sec1 <= 9; sec1++)
				{
					printf("%d", min0);
					printf("%d:", min1);
					printf("%d", sec0);
					printf("%d\n", sec1);
				}

			}

		}

	}

}

