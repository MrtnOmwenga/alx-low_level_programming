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

struct list_s *putchar_list(const list_t *h);
size_t print_list(const list_t *h);

#endif
