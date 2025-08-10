#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - supprime le premier noeud d'une liste listint_t
 * @head: pointeur vers le pointeur du premier noeud de la liste
 *
 * Return: la valeur n du noeud supprimé, ou 0 si la liste est vide
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
/* sauvegarder le noeud à supprimer */
n = temp->n;
/* récupérer la valeur à retourner */
*head = temp->next;
/* faire pointer la tête vers le noeud suivant */
free(temp);
/*libérer l'ancien premier noeud */

return (n);
}
