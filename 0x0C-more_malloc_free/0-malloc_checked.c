#include <stdlib.h>

/**
 *malloc_checked- Allocates memory
 *
 *@b: Size of memory to be allocated
 *
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
if (b > 0)
{
char *ptr;
ptr = malloc(b);
if (ptr != NULL)
{
return (ptr);
}
else
{
free(ptr);
return (NULL);
}
}
else
{
return (NULL);
}
}
