#include <stdio.h>
0;276;0c#include <stdlib.h>
#include <ctype.h>

/**
 *main- Prints the sum of two arguments
 *
 *@argc: Argument count
 *@argv: Argument array
 *
 *Return: int
 */

int main(int argc, char *argv[])
{
long int f = 0;
char *ptr;
if (argc == 1)
{
printf("%d\n", 0);
return (0);
}
else
{
int i;
for (i = 1; i < argc; i++)
{
int x = strtol(argv[i], &ptr, 10);
if (x == 0)
{
printf("Error\n");
return (1);
break;
}
else
{
f = f + strtol(argv[i], &ptr, 10);
}}
printf("%ld\n", f);
 printf("%s\n", ptr);
return (0);
}}
