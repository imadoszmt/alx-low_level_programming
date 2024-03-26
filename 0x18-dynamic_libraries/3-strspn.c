#include "main.h"

/**
 * _strspn - A function that gets the length of a prifix substring.
 *  @s: A pointer to string intended for search.
 *  @accept: A pointer to string containing the characters intended to match.
 *
 *  Return: number of first matched characters.
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;

	for (; *s != '\0'; s++)
	{
		char *accept_begin = accept;

		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				counter++;
			}
		}
		if (*accept == '\0')
		{
			accept = accept_begin;
		}
		if (__strchr(accept, *s) == NULL)
			break;
	}
	return (counter);
}

/**
 * _strchr - A function that locates the first occurrence of character
 * in a string.
 * @s: A pointer to the memory intended for the search.
 * @c: the searched character.
 *
 * Return: if 'c' is found return a pointer to the first occurrence
 * of the character, else return "NULL".
 */

char *__strchr(char *s, char c)
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
