#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_memcpy- Copies memory
 *
 *@dest: Where the address is to be copied
 *@src: Source of address
 *@n: Size of memory address
 *
 *Return: Pointer of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
