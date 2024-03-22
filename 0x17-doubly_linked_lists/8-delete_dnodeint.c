#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes a node at a given index
* @head: Pointer to a pointer to the head of the dlistint_t
* @index: Index of the node to be deleted
* Return: 1 upon deletion succeeded, -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head, *tmp;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

while (current != NULL && i < index)
{
current = current->next;
i++;
}

if (current == NULL)
return (-1);

tmp = current->prev;
tmp->next = current->next;

if (current->next != NULL)
current->next->prev = tmp;

free(current);
return (1);
}
