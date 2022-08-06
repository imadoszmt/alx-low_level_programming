#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: a pointer to character (the destination).
 * @src: a pointer to character (the source).
 * @n: interger (number of "src" bytes)
 *
 * Return: a pointer to character.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = _strlen(dest);
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _strlen - return the lenght of a string.
 * @s: pointer to a character.
 *
 * Return: lenght (integer).
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0';)
		count++;
	return (count);
}

