#ifndef DOG_H
#define DOG_H
/**
* struct dog - My structure
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: Longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#include <stdio.h>
#include <string.h>

typedef struct dog dog_t
{
	char *name;
	char *owner;
	int age;
};dog_t
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
