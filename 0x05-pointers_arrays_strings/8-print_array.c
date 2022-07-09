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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
