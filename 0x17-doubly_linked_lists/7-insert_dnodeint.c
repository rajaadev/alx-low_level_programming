#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a dlistint_t
* @h: Pointer to the head of the list
* @idx: posiytion to insert the new node index starts at 0
* @n: Value to store in  new node
* Return: Address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *current = *h;
unsigned int i = 0;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

if (current == NULL || i < idx - 1)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = current;
new->next = current->next;

if (current->next != NULL)
current->next->prev = new;

current->next = new;

return (new);
}
