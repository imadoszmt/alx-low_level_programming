#include "main.h"

/**
 * _strcmp - a function that compares two strings "s1" and "s2".
 * @s1: a pointer to character.
 * @s2: a pointer to character.
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	for (; *s1 != '\0' || *s2 != '\0'; s1++, s2++)
	{
		result = 0;
		if (*s1 != *s2)
		{
			result = *s1 - *s2;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
