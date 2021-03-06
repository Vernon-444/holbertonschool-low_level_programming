#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct dog - struct
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Description: Structure made to hold info about dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcopy(char *dest, char *src);


#endif
