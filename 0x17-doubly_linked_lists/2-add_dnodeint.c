#include "lists.h"

/**
 * add_dnodeint - adds at head a new node of a dlistint
 * @current_head: pointer of head of the list
 * @n: value of new node
 * Return: the address of the new element or Null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current_head = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = current_head;

	if (current_head != NULL)
		(current_head)->prev = new;

	*head = new;

	return (new);
}
