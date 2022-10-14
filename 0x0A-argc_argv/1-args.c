#include <stdio.h>

/**
 *main- Prints number of args passed into it
 *
 *@argc: Argument count
 *@argv: Arguments array
 *
 *Return: int
 */

int main(int argc, char *argv[])
{
if (argv[0])
{
printf("%d", argc);
}
return (0);
}
