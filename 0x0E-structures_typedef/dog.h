#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new data type structure with the multiple atributtes
 * @name: first memeber of the struct.
 * @age: second member of the struct.
 * @owner: third member of the struct.
 *
 * Description: creating new data type "structure" with multiple
 * variable of different type.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
