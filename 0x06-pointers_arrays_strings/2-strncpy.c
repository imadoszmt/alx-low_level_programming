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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ;i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
