#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index- Inserts node at index
 *
 *@head: Linked list
 *@idx: index
 *@n: Number to be entered
 *
 *Return: New node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *h;
listint_t *g;
listint_t *new_head;
unsigned int i = 0;
if (head == NULL || *head == NULL)
{
return (NULL);
}

h = *head;
while (i != idx - 1)
{
if (h == NULL)
{
return (*head);
}
h = h->next;
i++;
}

g = h->next;

new_head = malloc(sizeof(listint_t));
if (new_head == NULL)
{
return (NULL);
}
new_head->n = n;
new_head->next = g;

h->next = new_head;
g = new_head;

return (new_head);
}
