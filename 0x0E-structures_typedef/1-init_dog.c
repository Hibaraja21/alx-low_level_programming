#include "dog.h"

/**
 * init_dog - iits a variable of
 *                        type dog
 *
 * @d: dog identification
 * @name: the name of dog
 * @owner: owner's name
 * @age: do's age
 *
 *Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
