#include "main.h"

/**
 * string_toupper - A function that changes all letters to uppercase.
 * @a: a pointer to character.
 *
 * Return: a pointer to character.
 */

char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
