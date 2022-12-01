#include "lists.h"

/**
 *get_nodeint_at_index- Gets node at index
 *
 *@head: Linked list
 *@index: Index
 *
 *Return: Node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *n = head;
if (index == 0)
{
return (n);
}
while (n != NULL)
{
n = n->next;
i++;
if (i == index)
{
return (n);
}
}
return (NULL);
}
