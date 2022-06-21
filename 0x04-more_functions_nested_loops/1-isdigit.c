#include "main.h"

/**
 * _isdigit - A function that check weither a number is a digit.
 * @c: Parameter type integer.
 * Return: 1 if digit, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
