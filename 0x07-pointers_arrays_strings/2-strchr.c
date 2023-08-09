#include "main.h"

/**
 * _strchr - A function that locates the first occurrence of character
 * in a string.
 * @s: A pointer to the memory intended for the search.
 * @c: the searched character.
 *
 * Return: if 'c' is found return a pointer to the first occurrence
 * of the character, else return a null pointer.
 */

char *_strchr(char *s, char c)
{
	int comparaison;

	comparaison = _strcmp(s, &c);
	while (comparaison != 0)
	{
		s++;
		break;
	}
	return (s);
}

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

	for (; ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2)); )
	{
		s1++;
		s2++;
	}
	result = *s1 - *s2;
	return (result);
}
