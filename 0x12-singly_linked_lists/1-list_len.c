#include "lists.h"

/**
 *list_len- Counts number of elements in list
 *
 *@h: Singly linked list
 *
 *Return: size_t
 */

size_t list_len(const list_t *h)
{
size_t count = 1;
struct list_s *n;
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
