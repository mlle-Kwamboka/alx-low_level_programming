#include "dog.h"

/**
* new_dog - creates a new dog
* @name: Name of dog
* @age: Age of dog
* owner: dog owner
* Return: The new dog details struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
  if (new_dog == NULL)
          return (NULL);
  new_dog = malloc(sizeof(dog_t));
  
  new_dog->name = name;
  new_dog->age = age;
  new_dog->owner = owner;
  
  return (new_dog);
}
