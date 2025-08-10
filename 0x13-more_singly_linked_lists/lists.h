
#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct listint_s - singly linked list node structure
 * @n: integer stored in the node
 * @next: pointer next node in list (NULL if this last node)
 * Description: structure defines a node in a singly linked list
 * node stores an integer `n` and a pointer to the next node in the list.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
