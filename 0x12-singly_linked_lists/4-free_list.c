#include "lists.h"
#include <stdlib.h>

/**
 *free_list- Frees a linked list
 *
 *@head: Linked list
 *
 *Return: void
 */

void free_list(list_t *head)
{
list_t *curr = head;
while (curr != NULL)
{
list_t *n = curr;
curr = curr->next;
free(n->str);
free(n);
}
head = NULL;
}
