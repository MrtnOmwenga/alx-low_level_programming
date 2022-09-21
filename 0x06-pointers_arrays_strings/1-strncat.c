#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncat- Concatenates two strings
 *
 *@dest: String to be concatenated to
 *@src: String to be concatenated from
 *@n: Maximum number of characters to be appended
 *
 *Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
