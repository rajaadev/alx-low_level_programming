#include "lists.h"

/**
 * add_dnodeint - adds at head a new node of a dlistint
 * @h: pointer of head of the list
 * @n: value of new node
 * Return: the address of the new element or Null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
