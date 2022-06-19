#include <stdio.h>

/**
 * main - Printing the first "98" fibonacci numbers, starting from 1 & 2.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	unsigned long long  f1 = 0;
	unsigned long long  f2 = 1;
	int n;
	

	for (n = 0; n <= 98; n++)
	{
		if (n <= 97)
		{
			f2 = f2 + f1;
			f1 = f2 - f1;
			printf("%llu, ", f2);
		}
		else if (n == 98)
		{
			f2 = f2 + f1;
			f1 = f2 - f1;
			printf("%llu", f2);
		}
	}
	printf("\n");
	return (0);
}
