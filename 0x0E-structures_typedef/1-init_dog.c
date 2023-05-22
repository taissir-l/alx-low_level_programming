#include "dog.h"
#include <stdlib.h>


/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * @d: the pointer to struct dog to initialize
 * @name: the name to be  initialized
 * @age: the age to be initialized
 * @owner: the owner to be initialized
 *
 * Return: void
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
