#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the name of the file it was compiled
 * from.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	_putchar("%s\n", __FILE__);
	return (0);
}
