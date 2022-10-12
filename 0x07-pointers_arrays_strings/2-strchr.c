#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strchr- Searches for a character in a string
 *
 *@s: String to be searched through
 *@c: Characters to be looked for
 *
 *Return: Pointer to the first occurrence of the string
 */

char *_strchr(char *s, char c)
{
return (strchr(s, c));
}
