#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - ajoute un nouveau noeud à la fin de la liste
 * @head: pointeur vers le pointeur du premier noeud
 * @n: valeur à stocker dans le nouveau noeud
 *
 * Return: adresse du nouveau noeud, NULL si échec
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
/* La liste est vide, nouveau noeud devient la tête */
*head = new_node;
return (new_node);
}

/* Sinon, on parcourt liste au dernier noeud */
temp = *head;
while (temp->next != NULL)
temp = temp->next;

/* ajoute nouveau noeud à fin */
temp->next = new_node;

return (new_node);
}
