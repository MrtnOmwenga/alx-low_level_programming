#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_memset- Fills blank spaces with void
 *
 *@s: Pointer
 *@b: Character used to fill void
 *@n: Number of spaces to be filed
 *
 *Return: Pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
