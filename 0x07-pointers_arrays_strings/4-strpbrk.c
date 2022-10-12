#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strpbrk- Returns the first character that matches specified characters
 *
 *@s: String to be checked
 *@accept: Specified characters
 *
 *Return: char
 */

char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
