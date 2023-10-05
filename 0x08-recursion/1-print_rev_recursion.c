#include "main.h"

/**
 * _print_rev_recursion - A function that print a string in reverse
 * using recursion.
 * @s: A pointer the string to be printed.
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	int lenght = _strlen(s);

	if (lenght <= 1)
	{
		_putchar (*s);
		return;
	}
	_putchar(*s + (lenght - 1));
	_print_rev_recursion(_strncpy(s, s, (lenght - 1)));
	_putchar ('\n');
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
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
