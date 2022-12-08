#include "lists.h"

/**
 *add_dnodeint_end- Adds node at end of list
 *
 *@head: Head of linked list
 *@n: Data to be added to list
 *
 *Return: new_head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *h;
dlistint_t *new_head;

h = *head;
while (h != NULL && h->next != NULL)
{
h = h->next;
}

new_head = malloc(sizeof(dlistint_t));
if (new_head == NULL)
{
return (NULL);
}
new_head->n = n;
new_head->prev = h;
new_head->next = NULL;

if (h != NULL)
{
h->next = new_head;
}

if (*head == NULL)
{
*head = new_head;
}

return (*head);
}
