#include <stdio.h>

/**
 *main- Prints arguments passed into it
 *
 *@argc: Argument count
 *@argv: Arguments array
 *
 *Return: int
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
