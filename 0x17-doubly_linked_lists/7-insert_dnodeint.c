#include "lists.h"

/**
 *insert_dnodeint_at_index- Inserts node at index
 *
 *@h: head of list
 *@idx: Index
 *@n: Data to be inserted
 *
 *Return: new_head
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *curr;
dlistint_t *prev;
dlistint_t *new_head;

curr = *h;
while (curr != NULL)
{
if (i == idx)
{
break;
}
curr = curr->next;
i++;
}
if (i < idx)
{
return (NULL);
}
prev = curr->prev;

new_head = malloc(sizeof(dlistint_t));
if (new_head == NULL)
{
return (NULL);
}
new_head->n = n;
new_head->prev = prev;
new_head->next = curr;

if (prev != NULL)
{
prev->next = new_head;
}
else
{
*h = new_head;
}
if (curr != NULL)
{
curr->prev = new_head;
}
return (new_head);
}
