#include "main.h"

/**
 * _abs - A function that print the absolute value of an integer.
 * @n: Parameter type integer.
 * Return: 0 (Success).
 */

int _abs(int n)
{

	if (n < 0)
	{
		int c;

		c = n * (-1);
		return (c);
	}
	else
	{
		return (n);
	}

}
