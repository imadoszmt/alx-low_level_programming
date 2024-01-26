#include "function_pointers.h"

/**
 *  array_iterator - a function that iterate an action on an array of integer
 *  using a provided function.
 *  @array: the array intended for action.
 *  @size: the size of the array.
 *  @action: a pointer to the function that makes action.
 *
 *  Description: a function that makes action on an array of integer using a
 *  pointer to a function that passed as a parameter.
 *  Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action)
	{
		size_t counter;

		for (counter = 0; counter <= size; counter++)
		{
			action(array[counter]);
		}
	}
}
