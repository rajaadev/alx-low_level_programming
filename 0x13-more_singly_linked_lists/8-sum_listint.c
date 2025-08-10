#include "lists.h"

/**
 * sum_listint - calcule la somme des valeurs n de chaque noeud d'une liste
 * @head: pointeur vers le premier noeud de la liste
 *
 * Return: somme des valeurs n, ou 0 si la liste est vide
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
