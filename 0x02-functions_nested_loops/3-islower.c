#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * _islower - Prints a character
 *
 * @c: character to be checked
 *
 * Return: int
 *
 */
int _islower(int c)
{
if ( islower(c) )
{
return(1);
}
else
{
return(0);
}
}
