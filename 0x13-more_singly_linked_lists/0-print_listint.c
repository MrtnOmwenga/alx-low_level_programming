#include "lists.h"

/**
 *print_listint- Prints number of noded
 *
 *@h: Singly linked lists
 *
 *Return: Number of elements
 */

size_t print_listint(const listint_t *h)
{
size_t count = 1;
struct listint_s *n;

if (h == NULL)
{
return (0);
}
printf("%d\n", h->n);
n = (*h).next;
while (n != NULL)
{
printf("%d\n", n->n);
n = (*n).next;
count++;
}
return (count);
}
