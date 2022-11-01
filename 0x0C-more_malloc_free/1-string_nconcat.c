#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat- Concatenated 2 strings
 *
 *@s1: First string
 *@s2: Second string
 *@n: First few characterf of s2
 *
 *Return: Char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
s1 = ""; }
if (s2 == NULL)
{
s2 = ""; }
char *concat;
unsigned int i = 0, j = 0, k, s1_count = 0, s2_count = 0;
while (s1[i])
{
++s1_count;
++i; }
while (s2[j])
{
++s2_count;
++j; }
if (s2_count < n)
{
concat = malloc(s1_count + s2_count);
if (concat == NULL)
{
return (NULL);
free(concat); }
else
{
for (k = 0; k < s1_count; k++)
{
concat[k] = s1[k];
}
for (k = 0; k < s2_count; k++)
{
concat[s1_count] = s2[k];
s1_count = s1_count + 1; }
return (concat);
}}
else
{
concat = malloc(s1_count + n);
if (concat == NULL)
{
return (NULL);
free(concat); }
else
{
for (k = 0; k < n; k++)
{
concat[k] = s1[k]; }
for (k = 0; k < n; k++)
{
concat[s1_count] = s2[k];
s1_count = s1_count + 1; }
return (concat);
}}}
