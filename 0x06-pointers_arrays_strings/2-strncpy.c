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
	int i;

	i = 0;
	for (; src[i] != src[n] && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
