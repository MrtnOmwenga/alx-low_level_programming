#include <stdlib.h>

/**
 *calloc- Allocated memory for an array
 *
 *@nmemb: Number of members in array
 *@size: Size of elememnts in array
 *
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
else
{
char *ptr = (char *)malloc(nmemb * size);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
else
{
for (i = 0; i < nmemb; i++)
{
ptr[i] = 0;
}
return (ptr);
}
}
}
