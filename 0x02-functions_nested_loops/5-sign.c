#include "main.h"

/**
 * print_sign - A program that print the sign of a number.
 *@n: A parameter of type integer.
 *Return: 1 (if "n > 0"),0 (if "n == 0"), -1 (if "n < 0").
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return(1);
		printf("+");
	}
	else if (n < 0)
	{
		return(-1);
		printf("-");
	}
	else
	{
		return (0);
		printf("0");
	}
}

