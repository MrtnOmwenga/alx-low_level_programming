#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strpbrk- Returns the first character in a string that matches any of teh specified characters
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
