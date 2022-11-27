#ifndef LINKED_LISTS
#define LINKED_LISTS

#include <stddef.h>

/**
 *struct list_s- Singly linked list
 *
 *@str: Data
 *@len: length of string
 *@next: Pointer to next node
 *
 */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
struct list_s *putchar_list(const list_t *h);
size_t print_list(const list_t *h);

#endif
