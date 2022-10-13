#include <stdio.h>
#include "main.h"

/**
 *recursion2- Recursion
 *
 *@n: Number
 *@j: Counter
 *
 *Return: int
 */

int recursion2(int n, int j)
{
if (j < n)
{
if (n % j == 0)
{
return (0);
}
else
{
return (recursion2(n, j + 1));
}
}
else
{
return (1);
}
}

/**
 *is_prime_number- Checks whether a number is a prime number
 *
 *@n: Number to be checked
 *
 *Return: Int
 */

int is_prime_number(int n)
{
if (n < 0)
{
return (0);
}
else if (n == 1)
{
return (0);
}
else
{
return (recursion2(n, 2));
}
}
