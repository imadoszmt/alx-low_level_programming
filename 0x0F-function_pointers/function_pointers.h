#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stddef.h>
/** functions prototypes added inside a guards to prevent double inclusion */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
