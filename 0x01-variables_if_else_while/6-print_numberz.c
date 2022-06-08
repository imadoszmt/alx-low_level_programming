#include <stdio.h>

/**
 * main - printing base 10 single digits with putchar() function.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;	
	for ( num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
