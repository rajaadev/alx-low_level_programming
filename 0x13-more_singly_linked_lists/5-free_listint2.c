#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - libère une liste listint_t et met le pointeur head à NULL
 * @head: pointeur vers le pointeur du premier noeud de la liste
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head != NULL)
{
temp = (*head)->next;
/*sauvegarder le suivant*/
free(*head);
/*libérer le noeud courant*/
*head = temp;
/*avancer le pointeur tête*/
}

*head = NULL;
/*finalement, mettre *head à NULL*/
}
