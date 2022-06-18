#include <stdio.h>

/**
 * main - Printing the first 50 fibonacci numbers, starting from 1 & 2.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	unsigned long int f1 = 0;
	unsigned long int f2 = 1;
	int n;

	for (n = 0; n <= 49; n++)
	{
		if (n <= 48)
		{
			f2 = f2 + f1;
			f1 = f2 - f1;
			printf("%d, ", f2);
		}
		else if (n == 49)
		{
			f2 = f2 + f1;
			f1 = f2 - f1;
			printf("%d", f2);
		}
	}
	printf("\n");
	return (0);
}
