#include "main.h"

/**
 * reverse_array - a function that reverses an array of integers.
 * @a: a pointer to integer.
 * @n: integer (number of array's elements)
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

}
