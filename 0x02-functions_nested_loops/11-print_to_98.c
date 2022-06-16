#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A function that print from "n" to "98".
 * @n: A parameter type integer.
 * Return: 0 (Success).
 */

void print_to_98(int n)
{
	
	for (n; n <= 98; n++)
	{
		
		printf("%d", n);

		if ((n / 10 != 9) && (n % 10 = 8))
		{
			printf(',');
			printf(' ');
		}

	}
	for (n; n >= 98; n--)
	{
		printf("%d", n);

		if ((n / 10 != 9) && (n % 10 = 8))
		{
			printf(',');
			printf(' ');
		}
	}
}
