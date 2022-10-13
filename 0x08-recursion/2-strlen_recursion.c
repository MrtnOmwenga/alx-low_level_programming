#include <stdio.h>
#include "main.h"

/**
 *_strlen_recursion- Prints length of string using recursion
 *
 *@s: String to be counted
 *
 *Return: int
*/

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}
