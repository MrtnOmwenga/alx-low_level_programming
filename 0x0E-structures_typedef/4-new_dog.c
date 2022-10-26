#include "dog.h"
#include <stdlib.h>
/**
 *new_dog- Creates a new dog
 *
 *@name: Dog's name
 *@age: Dog's age
 *@owner: Dog's owner
 *
 *Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog = malloc(sizeof(dog_t));

if (my_dog == NULL)
{
free(my_dog->name);
free(my_dog->owner);
free(my_dog);
return (NULL);
}
else
{
my_dog->name = name;
my_dog->age = age;
my_dog->owner = owner;
  
return (my_dog);
}
}
