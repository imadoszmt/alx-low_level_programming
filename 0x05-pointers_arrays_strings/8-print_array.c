#include "main.h"
#include <stdio.h>

/**
 * print_array - Print "n" elements of an array of integers.
 * @a: a pointer to integer.
 * @n: a parameter type integer.
 *
 */

void print_array(int *a, int n)
{
	int i, a[n];

	for (i = 0; i < n; i++)
	{
		printf("%s, ", a[i]);
	}
	printf("\n");
}
