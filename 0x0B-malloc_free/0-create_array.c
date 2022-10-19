#include <stdio.h>
#include <stdlib.h>

/**
 *create_array- Creates an array of specific size
 *
 *@size: Size of array
 *@c: Character to initia;ize the array
 *
 *Return: char
 */

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size > 0)
{
s = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
else
{
return (NULL);
}
}
