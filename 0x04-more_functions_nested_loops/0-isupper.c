#include <stdio.h>
#include <ctype.h>

/**
 * _isupper- Checks whether character passed is uppercase
 *
 *@c: Character to be checked
 *
 * Return: int
 */

int _isupper(int c)
{
if (isupper(c) > 0)
{
return (1);
}
else
{
return (0);
}
}
