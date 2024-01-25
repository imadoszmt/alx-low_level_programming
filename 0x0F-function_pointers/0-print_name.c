#include "function_pointers.h"

/**
 * print_name - a function that print a name.
 * @name: a pointer to a string.
 * @(*f): a pointer to a function.
 *
 * Description: This is a function that print a name and takes a pointer to a
 * string which is the name as first argument and the second one is a pointer
 * to a function that does the operations.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
