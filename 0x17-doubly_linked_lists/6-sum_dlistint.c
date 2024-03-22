#include "lists.h"

/**
* sum_dlistint - Sums value the data (n) of a dlistint
* @head: Pointer to the head node
* Return: Sum of data, or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
