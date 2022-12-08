#include "lists.h"

/**
 *add_dnodeint- Adds a node to linked list
 *
 *@head: head of list
 *@n: Data to be added to node
 *
 *Return: New head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_head;

new_head = malloc(sizeof(dlistint_t));
if (new_head == NULL)
{
return (NULL);
}
new_head->n = n;
new_head->prev = NULL;
new_head->next = *head;

if ((*head) != NULL)
{
(*head)->prev = new_head;
}
*head = new_head;
return (new_head);
}
