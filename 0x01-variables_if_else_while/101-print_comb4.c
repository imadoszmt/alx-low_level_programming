#include <stdio.h>

/**
 * main - printing combinations of 3 different numbers.
 *
 */

int main(void)
{
	int num, num1, num2;

	for (num = '0'; num <= '9'; num++)
	{
		for (num1 = '0'; num1 <= '9'; num1++)
		{
			for (num2 = '0'; num2 <= '9'; num2++)
			{
				if (num < num1 && num1 < num2)
				{
					putchar(num);
					putchar(num1);
					putchar(num2);

					{
						if (num != 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
			
		}
		putchar('\n');
		return (0);
}
