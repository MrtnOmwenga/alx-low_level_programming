#include "lists.h"

/**
 *listint_len- Prints number of nodes
 *
 *@h: Singly linked lists
 *
 *Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t count = 1;
struct listint_s *n;

if (h == NULL)
{
return (0);
}
n = (*h).next;
while (n != NULL)
{
n = (*n).next;
count++;
}
return (count);
}
