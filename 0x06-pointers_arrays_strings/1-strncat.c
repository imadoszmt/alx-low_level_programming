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
	int j;

	for (j = 0; j < n; j++)
	{
		_strcpy(&dest[_strlen(dest)], &src[j]);
	}
	dest[_strlen(dest) + 1] = '\0';

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
/**
 * _strcpy - a function that copies string from "src" to "dest".
 * @dest: pointer to characters
 * @src: pointer to chracters.
 *
 * Return: character.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src) + 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
