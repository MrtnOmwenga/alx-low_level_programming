#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint- Deletes the head
 *
 *@head: Head
 *
 *Return: int
 */

int pop_listint(listint_t **head)
{
int i;
listint_t *h = *head;
listint_t *g;
if (head == NULL)
{
return (0);
}
i = (*h).n;
g = (*h).next;
free(h);
*head = g;
return (i);
}
