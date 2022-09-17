#include "main.h"

/**
 * string_toupper - A function that changes all letters to uppercase.
 * @a: a pointer to character.
 *
 * Return: a pointer to character.
 */

char *string_toupper(char *a)
{
	char *b;

	b = '\0';
	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
		{
			*a = *a - 32;
		}
		a++;
	}
	return(a);
}
