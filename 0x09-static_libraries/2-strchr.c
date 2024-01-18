#include "main.h"

/**
 * _strchr - A function that locates the first occurrence of character
 * in a string.
 * @s: A pointer to the memory intended for the search.
 * @c: the searched character.
 *
 * Return: if 'c' is found return a pointer to the first occurrence
 * of the character, else return "NULL".
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
