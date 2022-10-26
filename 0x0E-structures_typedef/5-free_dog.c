#include "dog.h"
#include <stdlib.h>

/**
 *free_dog- Frees a struct
 *
 *@d: struct
 *
 *Return: void
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
