#include <stdio.h>

/**
 * main -  Finds and prints the sum of even-value terms of fibonacci sequance.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	unsigned long f1;
	unsigned long f2;
	unsigned long sum;

	sum = 0;
	for (f2 = 1,f1 = 0; f2 <= 4000000; f2 = f2 + f1, f1 = f2 - f1)
	{
		if (f2 % 2 == 0)
		{
			sum = sum + f2;
			printf("%ld", sum);
		}
		printf("\n");
		return (0);
	}


}
