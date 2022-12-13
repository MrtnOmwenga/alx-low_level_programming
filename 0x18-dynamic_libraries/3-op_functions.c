#include <stdio.h>
#include "3-calc.h"
/**
 * add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int add(int a, int b)
{
return (a + b);
}

/**
 * sub - calculates the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */

int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - calculates the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */

int mul(int a, int b) 
{
return (a * b);
}

/**
 * div - calculates the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a and b
 */

int div(int a, int b)  
{
return (a / b);
}

/**
 * mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided b
 */

int mod(int a, int b)
{
return (a % b);
}
