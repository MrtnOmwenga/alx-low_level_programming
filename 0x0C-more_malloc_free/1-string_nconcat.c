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
char *concat;
unsigned int i = 0, j = 0;

if (s1 == NULL)
{
s1 = ""; }
if (s2 == NULL)
{
s2 = ""; }
concat = malloc(sizeof(s1) + n);
if (concat == NULL)
{
return (NULL); }
else
{
while (s1[i] != '\0')
{
concat[j] = s1[i];
i++;
j++; }
i = 0;
while (s2[i] != '\0' && i < n)
{
concat[j] = s2[i];
i++;
j++; }
concat[j] = '\0';
return (concat);
}}
