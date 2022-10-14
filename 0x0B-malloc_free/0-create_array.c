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
if (size > 0)
{
s = malloc(size * sizeof(char));
s[0] = c;
return (s);
}
else
{
return (NULL);
}
}
