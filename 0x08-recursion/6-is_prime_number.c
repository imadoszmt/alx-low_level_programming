#include "main.h"
int factor_func(int num, int divisor);

/**
 * is_prime_number - A function that checks if an integer is a
 * "prime number" then return '1', otherwise it returns '0'.
 * @n: the integer to check.
 *
 * Return: 1 if the number is a prime, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
		return (factor_func (n, 2));
}

/**
 * factor_func - A function that check whether "n" has a factor
 * or not using factore property.
 * @num: the number to be checked if it is a prime.
 * @divisor: the factor of the number "n".
 *
 * Return: return "0" if the number is a prime otherwise return "1".
 */

int factor_func(int num, int divisor)
{
	if (num % divisor == 0)
	{
		return (0);
	}
	else if (divisor * divisor > num)
	{
		return (1);
	}
	else
		return (factor_func(num, divisor + 1));
}
