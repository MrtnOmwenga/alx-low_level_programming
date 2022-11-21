#include <stdlib.h>

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
unsigned int i;
if (ptr != NULL)
{
free(ptr);
}
if (new_size == 0)
{
return (NULL);
}
else
{
char *ptr = (char *)malloc(new_size);
if (ptr == NULL)
{
free(ptr);
return (ptr);
}
else
{
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
else if (new_size == old_size)
{
return (ptr);
}
else
{
for (i = 0; i < new_size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
}
}}
