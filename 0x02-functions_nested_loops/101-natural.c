#include <stdio.h>

/**
 * main - Print all multiples of "3" below 1024 (excluded).
 *
 * Return: Integer.
 */

int main(void)
{
	int n, n1;
	int sum;

	sum = 0;
	for (n = 3; n < 1024; n += 3)
	{
		n1 = n;
		sum = sum + n1;
	}
	printf("%d\n", sum);
return (0);
}
