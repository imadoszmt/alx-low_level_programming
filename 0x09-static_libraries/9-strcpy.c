#include "main.h"

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
