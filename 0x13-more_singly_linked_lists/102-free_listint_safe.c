#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - libère une liste listint_t même avec boucle
 * @h: pointeur vers la tête de la liste (pointeur vers un pointeur)
 * Return: nombre de noeuds libérés, met le pointeur de tête à NULL
 *         quitte avec exit(98) si malloc échoue
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t **nodes;
	size_t size = 1024, count = 0, i;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);
	nodes = malloc(sizeof(listint_t *) * size);
	if (nodes == NULL)
		exit(98);
	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == nodes[i])
			{
				*h = NULL;
				free(nodes);
				return (count);
			}
		}
		if (count == size)
		{
			free(nodes);
			exit(98);
		}
		nodes[count] = *h;
		count++;

		temp = *h;
		*h = (*h)->next;
		free(temp);
	}
	*h = NULL;
	free(nodes);
	return (count);
}
