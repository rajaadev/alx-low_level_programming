#include "lists.h"

/**
* get_dnodeint_at_index - Returns node at index of a dlistint_t
* @head: Pointer to current head node
* @index: Index of the node to retrieve
* Return: Pointer of node at index, or NULL if not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int i = 0;

	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	return (current_node);
}
