#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end- Adds a node to the end of a list
 *
 *@head: Head of the list
 *@n: Data to be added
 *
 *Return: Head of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_head = malloc(sizeof(listint_t));
listint_t *h;
if (new_head == NULL)
{
return (NULL);
}

new_head->n = n;
new_head->next = NULL;

if (*head == NULL)
{
*head = new_head;
}
else
{
h = *head;
while (h->next != NULL)
{
h = h->next;
}
h->next = new_head;
}
return (*head);
}
