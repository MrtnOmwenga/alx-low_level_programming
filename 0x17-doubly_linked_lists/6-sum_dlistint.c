#include "lists.h"

/**
 *sum_dlistint.c- Sums elements in list
 *
 *@head: Head of list
 *
 *Return: int
 */

int sum_dlistint(dlistint_t *head)
{
int result = 0;
dlistint_t *n = head;

while(n != NULL)
{
result += n->n;
n = n->next;
}
return (result);
}
