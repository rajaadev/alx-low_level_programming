#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - libère tous les noeuds d'une liste listint_t
 * @head: pointeur vers le premier noeud de la liste
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head->next;
/* sauvegarder le pointeur vers le noeud suivant*/
free(head);
/*libérer le noeud courant*/
head = temp;
/*avancer au noeud suivant*/
}
}
