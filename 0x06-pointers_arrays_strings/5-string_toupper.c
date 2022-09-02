#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters to uppercase.
 * @str: a pointer to character.
 * Return: a pointer to character.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] >= 'a' && str[i] <= 'z'; i++)
	{
		str[i] = str[i] - 32;
	}
	return (str);
}	
