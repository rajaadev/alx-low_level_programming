#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - affiche une liste listint_t
 * même si elle contient une boucle
 * @head: pointeur vers le début de la liste
 * Return: le nombre de noeuds affichés
 * En cas d’échec, exit(98)
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t **nodes = NULL; /* Tableau dynamique d’adresses */
const listint_t **tmp;
size_t count = 0;               /* Nb de noeuds affichés */
size_t i;

while (head != NULL)
{
/* Vérifier si on a déjà rencontré ce noeud */
for (i = 0; i < count; i++)
{
if (head == nodes[i])
{
/* On a trouvé un noeud en boucle */
printf("-> [%p] %d\n", (void *)head, head->n);
free(nodes);
return (count);
}
}

/* Ajouter le noeud courant dans le tableau */
tmp = realloc(nodes, (count + 1) * sizeof(listint_t *));
if (tmp == NULL)
{
free(nodes);
exit(98);
}
nodes = tmp;
nodes[count] = head;

/* Afficher ce noeud */
printf("[%p] %d\n", (void *)head, head->n);

head = head->next;
count++;
}

free(nodes);
return (count);
}
