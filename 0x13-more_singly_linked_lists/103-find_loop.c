#include "lists.h"

/**
 * find_listint_loop - trouve le noeud où commence la boucle dans une liste
 * @head: pointeur vers le début de la liste
 *
 * Return: adresse du noeud débutant la boucle, NULL sinon
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}
