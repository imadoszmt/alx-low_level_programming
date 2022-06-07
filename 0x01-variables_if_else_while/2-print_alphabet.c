#include <stdio.h>

/**
 * main - printing alphabets in a lowercase.
 *
 * Return: 0 (Success)
 */

int main (void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{	
		putchar (ch);
		putchar('\n');
	}

	return (0);
}
