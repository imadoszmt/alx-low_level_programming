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
	int i, j, result;

	for (i = 0, j = 0; s1[i] != '\0' || s2[j] != '\0'; i++, j++)
	{
		result = 0;
		if (s1[i] > s2[j])
		{
			result = 15;
		}
		else if (s1[i] < s2[j])
		{
			result = -15;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
