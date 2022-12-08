#include "lists.h"

/**
 *get_dnodeint_at_index- Get node at index
 *
 *@head: Head of linked list
 *@index: Index
 *
 *Return: Nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *n;

n = head;
while (n->next != NULL)
{
if (i == index)
{
return (n);
}
i++;
n = n->next;
}
return (NULL);
}
