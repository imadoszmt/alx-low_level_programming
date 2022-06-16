#include "main.h"

/**
 * time_table - A function that print times table of "9".
 *Parameter: void.
 *Return: void.
 */

void times_table(void)
{
	int n, n1, n2, n3, n4, n5, n6, n7, n8, n9;

	if (n == 0)
	{
		for (n1 = 0; n1 <= 9; n1++)
		{
			for (n2 = 0; n2 <= 18; n2 += 2)
			{
				for (n3 = 0; n3 <= 27; n3 += 3)
				{
					for (n4 = 0; n4 <= 36; n4 += 4)
					{
						for (n5 = 0; n5 <= 45; n5 += 5)
						{
							for (n6 = 0; n6 <= 54; n6 += 6)
							{
								for (n7 = 0; n7 <= 63; n7 += 7)
								{
									for (n8 = 0; n8 <= 72; n8 += 8)
									{
										for (n9 = 0; n9 <= 81; n9 += 9)
										{
											_putchar('0' + n);
											_putchar(',');
											_putchar(' ');
											_putchar('0' + n1);
											_putchar(',');
											_putchar(' ');
											_putchar('0' + n2);
											_putchar(',');
											_putchar(' ');
											_putchar('0' + n3);
											_putchar(',');
											_putchar(' ');
											_putchar('0' + n4);
											_putchar(',');
											_putchar(' ');
											_putchar('0' + n5);
											_putchar(',');
											_putchar(' ');
											_putchar('0' + n6);
											_putchar(',');
											_putchar(' ');
											_putchar('0' + n7);
											_putchar(',');
											_putchar(' ');
											_putchar('0' + n8);
											_putchar(',');
											_putchar(' ');
											_putchar('0' + n9);
										}

									}

								}

							}

						}

					}

				}

			}

		}
	}
}
