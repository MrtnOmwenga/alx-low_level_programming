#include "lists.h"

/**
 *free_dlistint- Frees a linked list
 *
 *@head: Head of linked list
 *
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *curr = head;
while (curr != NULL)
{
dlistint_t *h = curr;
curr = curr->next;
free(h);
}
head = NULL;
}
