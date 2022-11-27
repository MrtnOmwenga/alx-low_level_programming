#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node- Adds node to the beginning of list
 *
 *@head: Head of list
 *@str: Data to be added to list
 *
 *Return: New head
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_head = malloc(sizeof(list_t));
unsigned int count = 0;
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
new_head->next = *head;

*head = new_head;
return (*head);
}
