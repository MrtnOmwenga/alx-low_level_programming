#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 *add_node_end- Adds a node to the end of a list
 *
 *@head: Head of the list
 *@str: Data to be added
 *
 *Return: Head of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_head = malloc(sizeof(list_t));
unsigned int count = 0;
list_t *n;
int i = 0;
while (str[i])
{
count++;
i++;
}

if (new_head == NULL)
{
return (NULL);
}
new_head->str = strdup(str);
new_head->len = count;
new_head->next = NULL;
if (*head == NULL)
{
*head = new_head;
}
else
{
n = *head;
while (n->next != NULL)
{
n = n->next;
}
n->next = new_head;
}
return (*head);
}
