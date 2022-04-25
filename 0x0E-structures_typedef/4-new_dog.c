#include "dog.h"
#include <stdlib.h>
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
* new_dog - creates a new dog
* @name: Name of dog
* @age: Age of dog
* owner: dog owner
* Return: The new dog details struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *my_dog;
        my_dog = malloc(sizeof(dog_t));
        
        if (my_dog == NULL)
                return (NULL);
  
          my_dog->name = name;
          my_dog->age = age;
          my_dog->owner = owner;
          
          _strcpy(my_dog->name, name);
          _strcpy(my_dog->owner, owner);
  
          return (my_dog);
}
