#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncpy- Copies a string onto another string
 *
 *@dest: String to be copied to
 *@src: String to be copied from
 *@n: Max number of characters to copy
 *
 *Return: Char *
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
