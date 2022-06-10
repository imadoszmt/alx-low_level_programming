#include <stdio.h>

/**
 * main - a combinations of two-two digit numbers,separated by ",",followed by "space".
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num, num1, num2, num3;
	
	for (num = '0'; num <= '9'; num++)
	{

		for (num1 = '0'; num1 <= '9';num1++)
		{
			putchar(num);
			putchar(num1);
			putchar(' ');
			
			for (num2 = '0'; num2 <= '9'; num2++)
			{
				for (num3 = '0'; num3 <= '9'; num3++)
				{	
				if (num1 < num2)
				{
					putchar(num2);
					putchar(num3);
					
					if (num1 != '8')
					{
						putchar(',');
						putchar(' ');
					}

				}

			        }
			}
		}
	}
	putchar('\n');
	return (0);
}
