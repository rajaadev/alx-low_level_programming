#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insère un nouveau noeud à l'index donné
 * @head: pointeur vers le pointeur du premier noeud de la liste
 * @idx: indice (commence à 0) où insérer le nouveau noeud
 * @n: valeur à stocker dans le nouveau noeud
 *
 * Return: adresse du nouveau noeud, ou NULL si échec
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i;

if (head == NULL)
return (NULL);

/* Cas particulier : insertion en début de liste */
if (idx == 0)
return (add_nodeint(head, n));

temp = *head;

/* On parcourt la liste pour trouver le noeud précédent à la position idx */
for (i = 0; temp != NULL && i < idx - 1; i++)
temp = temp->next;

/* Si atteint position invalide (fin de liste avant idx-1), on échoue */
if (temp == NULL)
return (NULL);

/* Allouer un nouveau noeud */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

/* Insérer le nouveau noeud entre temp et temp->next */
new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
