#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *recursion3- Performs a recursion
 *
 *@s: Original string
 *@d: A copy of s
 *@j: Counter
 *
 *Return: Int
 */

int recursion3(char s[], int d, int j)
{
if (d == j)
{
return (1);
}
if (s[d] != s[j])
{
return (0);
}
else
{
if (d < j + 1)
{
return (recursion3(s, d + 1, j - 1));
}
else
{
return (1);
}}}

/**
 *is_palindrome- Checks whether a string is a palindrome
 *
 *@s: String to be checked
 *
 *Return: int
 */

int is_palindrome(char *s)
{
int n = strlen(s);
if (n == 0)
{
return (1);
}
else
{
return (recursion3(s, 0, n - 1));
}}
