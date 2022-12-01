#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index- Deletes node at index
 *
 *@head: linked list
 *@index: Index
 *
 *Return: 1 if success, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *f;
listint_t *g;
listint_t *h;
unsigned int i = 0;
if (head == NULL || *head == NULL)
{
return (-1);
}
f = *head;
if (index != 0)
{
while (i != index - 1)
{
f = f->next;
i++;
if (f == NULL)
{
return (-1);
}
}
g = f->next;
h = g->next;
}
else
{
g = *head;
f = NULL;
*head = g->next;
}

if (index != 0)
{
f->next = h;
}
free(g);
return (1);
}
