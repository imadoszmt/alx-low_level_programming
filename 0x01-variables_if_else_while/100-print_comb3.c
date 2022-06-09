#include <stdio.h>

/**
 * main - printing combinations of different '2' numbers, followed with ',' and "space".
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;
	int num1;

	for (num = '0'; num <= '9' ; num++)
	{
		for (num1 = '0'; num1 <= '9'; num1++)
		{	
			if (num != num1 && num < num1)
		        {
				putchar(num);
				putchar(num1);

				{
					if (num != '8');
					{
		        			putchar(',');
						putchar(' ' );
					}
				}
			}	

		}	
	}
	putchar('\n');
	return (0);

}
