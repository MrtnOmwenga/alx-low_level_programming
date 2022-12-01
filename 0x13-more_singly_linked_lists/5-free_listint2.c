#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2- Frees a linked list
 *
 *@head: Linked list
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
if (**head != NULL)
{
listint_t *curr = *head;
while (curr != NULL)
{
listint_t *h = curr;
curr = curr->next;
free(h);
}
*head = NULL;
}
}
