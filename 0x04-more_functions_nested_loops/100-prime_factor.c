#include <stdio.h>

/**
 * main - print the largest prime factor
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long factor, lpfactor, num;

	num = 612852475143;
	factor = 2;
	lpfactor = 2;
	while (factor < num)
	{
		if (num % factor == 0)
		{
			factor = factor;
			num = num / factor;
		}
		else
			factor++;
		if (factor >= lpfactor)
			lpfactor = factor;
	}
	printf("%ld\n", lpfactor);
	return (0);
}
