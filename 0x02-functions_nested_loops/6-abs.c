#include "main.h"
#include <stdio.h>

/**
 * _abs - A function that print the absolute value of an integer.
 * Parameter: Type integer.
 * Return: 0 (Success).
 */

int _abs(int n)
{

	if (n < 0)
	{
		int c;

		c = n* (-1);
		printf("%d",c);
	}
	else
	{
		printf("%d",n);
	}
return (0);	
}
