#include "lists.h"

/**
 * get_nodeint_at_index - retourne le nième noeud d'une liste listint_t
 * @head: pointeur vers le premier noeud de la liste
 * @index: indice du noeud recherché (commence à 0)
 *
 * Return: adresse du noeud à l'indice index, ou NULL si inexistant
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL; i++)
{
if (i == index)
return (head);
head = head->next;
}

return (NULL);
}
