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
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
	else
		_putchar ('\n');
}
