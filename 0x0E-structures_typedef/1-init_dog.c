#include "dog.h"
#include <stdlib.h>

typedef struct dog

/**
 * init_dog - initializes a variable of type struct dog
 * @d: Variable to be initialised
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	 d->name = name;
	 d->age = age;
	 d->owner = owner;
}
