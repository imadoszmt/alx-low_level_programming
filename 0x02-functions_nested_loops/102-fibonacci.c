#include <stdio.h>

/**
 * main - Printing the first 50 fibonacci numbers, starting from 1 & 2.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int f1 = 0;
	int f2 = 1;

	for (n = 0; n <= 49; n++)
	{
		f2 = f2 + f1;
		f1 = f2 - f1;
		printf("%d, ", f2);
	}
	printf("\n");
}
