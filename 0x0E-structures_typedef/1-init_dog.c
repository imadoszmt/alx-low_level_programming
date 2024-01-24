#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize  "struct dog".
 * @d: a pointer to a struct.
 * @name: a pointer to a char.
 * @age: variable of type "float".
 * @owner: a pointer to a char.
 *
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
