#ifndef DOG_HH
#define DOG_H
/**
* struct dog - My structure
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: Longer description
*/
typdef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
