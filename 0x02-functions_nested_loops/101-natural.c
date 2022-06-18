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
	for (n = 0; n < 1024; n ++)
	{
		if ((n % 3) || (n % 5))
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);

return (0);
}
