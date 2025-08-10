#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - ajoute un nouveau noeud au début de la liste
 * @head: pointe aupointeur du premier noeud
 * @n: valeur à stocker au nouveau noeud
 * Return: adresse du nouveau noeud, NULL si échec
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
