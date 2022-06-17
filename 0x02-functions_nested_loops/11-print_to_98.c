#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A function that print from "n" to "98".
 * @n: A parameter type integer.
 * Return: 0 (Success).
 */

void print_to_98(int n)
{
	int N;

	if (n <= 98)
	{
		for (N = n; N <= 98; N++)
		{
			printf("%d, ", N);
		}
	}
	else (n >= 98)
	{
		for (N = n; N >= 98; N--)
		{
			printf("%d, ", N);
		}
	}
	printf('\n');
}
