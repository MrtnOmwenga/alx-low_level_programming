#include "lists.h"
#include <stdlib.h>

/**
 *free_listint- Frees a linked list
 *
 *@head: Linked list
 *
 *Return: void
 */

void free_listint(listint_t *head)
{
listint_t *curr = head;
while (curr != NULL)
{
listint_t *h = curr;
curr = curr->next;
free(h);
}
head = NULL;
}
