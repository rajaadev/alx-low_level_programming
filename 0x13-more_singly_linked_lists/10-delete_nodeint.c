#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - supprime le noeud à l'index donné
 * @head: pointeur vers le pointeur du premier noeud de la liste
 * @index: index du noeud à supprimer (commence à 0)
 * Return: 1 si succès, -1 sinon
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

/* Cas particulier : suppression du premier noeud */
if (index == 0)
{
temp = *head;
*head = temp->next;
free(temp);
return (1);
}

prev = *head;
/* Chercher le noeud précédent à celui à supprimer */
for (i = 0; prev != NULL && i < index - 1; i++)
prev = prev->next;

/* Si on atteint la fin ou impossible d'aller à l'index */
if (prev == NULL || prev->next == NULL)
return (-1);

temp = prev->next;         /* noeud à supprimer */
prev->next = temp->next;   /* sauter le noeud */
free(temp);

return (1);
}
