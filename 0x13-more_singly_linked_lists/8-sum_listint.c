#include "lists.h"

/**
 *sum_listint- Prints sum of elements in list
 *
 *@head: Linked list
 *
 *Return: int
 */

int sum_listint(listint_t *head)
{
listint_t *n;
int sum = 0;
if (head == NULL)
{
return (0);
}
n = head;
while (n != NULL)
{
sum += n->n;
n = (*n).next;
}
return (sum);
}
