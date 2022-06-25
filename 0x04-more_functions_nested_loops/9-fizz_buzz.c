#include <stdio.h>

/**
 * main - Print "Fizz" for multiples of '3', "Buzz" for multiples of '5',
 * "FizzBuzz" for both, starting from 0 to 100.
 *
 * Return: 0 (Succes).
 */

int main(void)
{
	int n = 1;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";

	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			printf("%s", fizz);
		}
			if (n % 5 == 0)
			{
				printf("%s", buzz);
			}
		else if ((n % 3 != 0) && (n % 5 != 0))
		{
			printf("%d", n);
		}
		printf(" ");
		n++;
	}
	printf("\n");

}
