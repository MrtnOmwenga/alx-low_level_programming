#include "lists.h"

/**
 *insert_dnodeint_at_index- Inserts node at index
 *
 *@h: head of list
 *@idx: Index
 *@n: Data to be inserted
 *
 *Return: new_head
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *curr;
dlistint_t *new_head;
curr = *h;
if (h == NULL || *h == NULL)
{
return (NULL); }
while (curr != NULL)
{
if (i == idx)
{
i++;
break; }
curr = curr->next;
i++; }
if (i < idx)
{
return (NULL); }
else if (i == idx)
{
return (add_dnodeint_end(h, n)); }
new_head = malloc(sizeof(dlistint_t));
if (new_head == NULL)
{
return (NULL); }
new_head->n = n;
new_head->prev = curr->prev;
new_head->next = curr;
if (curr->prev != NULL)
{
curr->prev->next = new_head; }
else
{
*h = new_head; }
if (curr != NULL)
{
curr->prev = new_head; }
else
{
curr = new_head; }
return (new_head); }
