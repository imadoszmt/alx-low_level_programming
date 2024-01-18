#include "main.h"

/**
 * _memcpy - A function that copies 'n' bytes of memory block
 * from "src" to "dest".
 * @dest: pointer to char represent the distination of copied block.
 * @src: pointer to char,it is the source from where memory is copied
 * @n: number of bytes to be copied.
 *
 * Return: a pointer to the first element of the distination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
