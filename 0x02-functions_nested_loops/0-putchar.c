#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * myPrintFunct - Prints a character
 *
 *@c: Character to print
 *
 * Return: void
 *
 */
void myPrintFunct(char c)
{
putchar(c);
}
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
/* your code goes there */
char string[] = "_putchar\n";
int c;
for (c = 0; c < 9; c++)
{
myPrintFunct(string[c]);
}
return (0);
}
