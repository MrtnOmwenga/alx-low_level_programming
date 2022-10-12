#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strstr- Returns the first occurrence of a string in a string
 *
 *@haystack: String to be checked
 *@needle: String being looked for
 *
 *Return: char *
 */

char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
