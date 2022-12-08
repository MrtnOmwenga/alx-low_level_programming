#include "lists.h"

/**
 *delete_dnodeint_at_index- Deletes node at index
 *
 *@head: Head of linked list
 *@index: index
 *
 *Return: 1 if succesful else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *curr;
dlistint_t *prev;
dlistint_t *next;
unsigned int i = 0;

if (head == NULL || *head == NULL)
{
return (-1);
}

curr = *head;
while (curr != NULL)
{
if (i == index)
{
break;
}
curr = curr->next;
i++;
}
if (i < index)
{
return (-1);
}
  
prev = curr->prev;
next = curr->next;

free(curr);
if (index == 0)
{
*head = next;
}
if (prev != NULL)
{
prev->next = next; }
if (next != NULL)
{
next->prev = prev; }
return (1);
}
