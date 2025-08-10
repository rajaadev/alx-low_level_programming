#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - affiche une liste listint_t
 * même si elle contient une boucle
 * @head: pointeur vers la tête de liste
 * Return: nombre de noeuds imprimés
 * En cas d’erreur de malloc, exit(98)
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast, *loop_node;
size_t count = 0;

if (head == NULL)
return (0);

/* Détecter la boucle avec Floyd's cycle detection */
slow = fast = head;
while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
break;
}

if (slow != fast)
{
/* Pas de boucle, afficher normalement */
while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
head = head->next;
}
return (count);
}

/* Trouver le début de la boucle */
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
loop_node = slow;

/* Afficher jusqu'au début de la boucle */
while (head != loop_node)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
head = head->next;
}

/* Afficher les noeuds en boucle une fois */
do {
printf("[%p] %d\n", (void *)head, head->n);
count++;
head = head->next;
} while (head != loop_node);

/* Indiquer la boucle */
printf("-> [%p] %d\n", (void *)head, head->n);

return (count);
}
