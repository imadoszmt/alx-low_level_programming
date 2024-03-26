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

	i = two_strlen(dest);
	j = 0;
	for (; src[j] != src[n]; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
/**
 * two_strlen - return the lenght of a string.
 * @s: pointer to a character.
 *
 * Return: lenght (integer).
 */

int two_strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0';)
		count++;
	return (count);
}

