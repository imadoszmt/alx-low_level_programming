#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters to uppercase.
 * @str: a pointer to character.
 * Return: a pointer to character.
 */

char *string_toupper(char *str)
{
	while (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
		str++;
	}
	return (str);
}
