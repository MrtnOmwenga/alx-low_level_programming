#include "lists.h"

/**
 *dlistint_len- Checks for number of nodes
 *
 *@h: Head of linked list
 *
 *Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *n;

n = h;
while (n != NULL)
{
count++;
n = n->next;
}
return (count);
}
