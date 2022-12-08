#include "lists.h"

/**
 *print_dlistint- Prints elements in list
 *
 *@h: Head of linked lists
 *
 *Return: Number of elements in list
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *n;

n = h;
while (n != NULL)
{
printf("%d\n", n->n);
count++;
n = n->next;
}
return (count);
}
