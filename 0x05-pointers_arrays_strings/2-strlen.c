#include "main.h"

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
