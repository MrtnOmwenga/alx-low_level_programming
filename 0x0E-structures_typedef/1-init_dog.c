#include "dog.h"
#include <stddef.h>
/**
 *init_dog- Initializes dog struct
 *
 *@d: Struct
 *@name: Dog name
 *@age: Dog's age
 *@owner: Dog's owner
 *
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}}
