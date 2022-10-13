#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *recursion- Recursion function
 *
 *@j: Counter
 *@n: Number
 *
 *Return: int
 */

int recursion(int n, int j)
{
if (j < n / 2)
{
int next = j + 1;
if (j * j == n)
{
return (j); }
else
{
return (recursion(n, next)); }}
else
{
return (-1); }}

/**
 *_sqrt_recursion- Finds the square root of a number
 *
 *@n: the number
 *
 *Return: int
 */

int _sqrt_recursion(int n)
{
int e;
if (n > 1)
{
e = recursion(n, 1);
return (e); }
else if (n == 1)
{
return (1); }
else if (n == 0)
{
return (0); }
else
{
return (-1); }}
