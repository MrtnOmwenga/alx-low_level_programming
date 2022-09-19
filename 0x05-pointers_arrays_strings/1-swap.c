#include "main.h"
#include <stdio.h>

/**
 *swap_int- swaps two numbers
 *
 *@a: First number
 *@b: Second number
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
int c = *a;
int d = *b;

*a = d;
*b = c;
}
