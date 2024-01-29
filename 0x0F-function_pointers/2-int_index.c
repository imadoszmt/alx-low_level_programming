#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: array of intger intended for searching.
 * @size: number of elements in the array.
 * @cmp: pointer to function used for comparaison.
 *
 * Return:if true return the index of the encountered element, otherwise 0.
 * "-1" if no element matches and "size <= 0".
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (cmp && array && size > 0)
	{
		int index;

		for (index = 0; index < size; index++)
		{
			int result;

			result = cmp(array[index]);
			if (result)
			{
				return (index);
			}
		}
	}
	return (-1);
}
