#include <stdlib.h>
#include <string.h>
#include <assert.h>

/**
 *_realloc- Reallocates memory
 *
 *@ptr: Allocated memory
 *@old_size: Old size of memory
 *@new_size: New size of memory'
 *
 *Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ptrNew;
if (ptr == NULL)
{
return (NULL);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (!ptr)
{
return (malloc(new_size));
}
else if (new_size <= old_size)
{
return (ptr);
}
else
{
assert((ptr) && (new_size > old_size));
ptrNew = malloc(new_size);
if (ptrNew)
{
memcpy(ptrNew, ptr, old_size);
free(ptr);
}
return (ptrNew);
}}
