#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_nodeint- Adds node to the beginning of list
 *
 *@head: Head of list
 *@n: Data to be added to list
 *
 *Return: New head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_head = malloc(sizeof(listint_t));

if (new_head == NULL)
{
return (NULL);
}

new_head->n = n;
new_head->next = *head;

*head = new_head;
return (*head);
}
