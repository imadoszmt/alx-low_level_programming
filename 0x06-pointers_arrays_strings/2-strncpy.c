#include "main.h"

/**
 * _strncpy - A  function that copies 'n' bytes from "src" to "dest".
 * @dest: pointer to char (destination of copied string).
 * @src: pointer to char (from where string copied).
 * @n: amount of copied bytes (characters).
 *
 * Return: pointer to string copied function.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	for (; src[j] != src[n]; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
