#include "lists.h"

/**
 * reverse_listint - inverse une liste chaînée listint_t
 * @head: pointeur vers le pointeur du premier noeud de la liste
 *
 * Return: pointeur vers le premier noeud de la liste inversée
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next;

if (head == NULL || *head == NULL)
return (NULL);

while (*head)
{
next = (*head)->next;
/*sauvegarder le suivant*/
(*head)->next = prev;
/*inverser le pointeur next*/
prev = *head;
/*avancer prev (nouvelle tête)*/
*head = next;
/*avancer head au suivant*/
}

*head = prev;
/*mettre à jour la tête de liste*/

return (prev);
}
