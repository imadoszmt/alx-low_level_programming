#include "main.h"

/**
 * _memset - a function that fills a block of memory with
 * a particular value.
 * @s: a pointer to the block of memory to be filled.
 * @b: value that fills the block of memory.
 * @n: number of bytes to be filled.
 *
 * Return: a pointer to the first character of "s".
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char c = (unsigned char) b;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
