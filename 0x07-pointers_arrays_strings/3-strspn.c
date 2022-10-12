#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strspn- Returns the length of a prefix substring found in a string
 *
 *@s: String to be checked
 *@accept: String to be accepted
 *
 *Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
