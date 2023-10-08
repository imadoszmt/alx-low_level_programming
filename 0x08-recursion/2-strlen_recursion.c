#include "main.h"

/**
 * _strlen_recursion - A function that print the lenght of a string 
 * using recursion.
 * @s: A pointer to the string counted.
 *
 * Return: An integer (number of characters)
 */

int _strlen_recursion(char *s)
{
	if (*s > '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);


