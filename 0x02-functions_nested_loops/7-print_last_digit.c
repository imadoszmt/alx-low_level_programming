#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - A function that print the last digit of a number.
 * @n: A parameter of type integer.
 * Return: 0 (Success).
 */

int print_last_digit(int n)
{
	int c;

	c = n % 10;
	_putchar('0' + c);
	return (c);
}
