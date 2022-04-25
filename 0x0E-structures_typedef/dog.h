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
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
