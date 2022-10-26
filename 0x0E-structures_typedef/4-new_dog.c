#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
free(my_dog);
return (NULL);
}
else
{
char *dog_name = strdup(name);
char *dog_owner = strdup(owner);
my_dog->name = dog_name;
my_dog->age = age;
my_dog->owner = dog_owner;
  
return (my_dog);
}
}
