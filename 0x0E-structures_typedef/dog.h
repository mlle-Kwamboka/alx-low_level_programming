/**
* struct dog - My structure
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: Defines a new type with given parameters
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

