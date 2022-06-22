/**
 * init_dog - init var of type struct dog
 *
 * @d: ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: 0 on success
 */

#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
