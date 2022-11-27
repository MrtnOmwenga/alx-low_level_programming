#include "lists.h"
#include <stdio.h>

/**
 *putchar_list- Prints members of a singly linked list
 *
 *@h: Singly linked list
 *
 *Return: void
 */

struct list_s *putchar_list(const list_t *h)
{
if ((*h).str == NULL)
{
printf("[0] (nil)\n");
return ((*h).next);
}
printf("[%u] %s\n", (*h).len, (*h).str);
return ((*h).next);
}

/**
 *print_list- Prints memers of list while keeping count
 *
 *@h: Singly linked list
 *
 *Return: Size of member
 */

size_t print_list(const list_t *h)
{
size_t count = 1;
struct list_s *n;

if (h == NULL)
{
return (0);
}
n = putchar_list(h);
while (n != NULL)
{
n  = putchar_list(n);
count++;
}
return (count);
}
