#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * detect_loop - détecte la boucle dans une liste avec Floyd's algorithm
 * @head: tête de la liste
 *
 * Return: pointeur sur noeud où la boucle commence, NULL sinon
 */
const listint_t *detect_loop(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;

	if (!head)
		return (NULL);

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}

	if (!fast || !fast->next)
		return (NULL);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (slow);
}

/**
 * print_until_loop - print list until loop starts
 * @head: pointer to starting node
 * @loop_node: node where loop starts
 *
 * Return: number of nodes printed
 */
size_t print_until_loop(const listint_t *head, const listint_t *loop_node)
{
	size_t count = 0;

	while (head != loop_node)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	return (count);
}

/**
 * print_loop - print nodes in the loop once
 * @loop_node: starting node of the loop
 *
 * Return: number of nodes printed
 */
size_t print_loop(const listint_t *loop_node)
{
	size_t count = 0;
	const listint_t *current = loop_node;

	do {
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	} while (current != loop_node);

	printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);

	return (count);
}

/**
 * print_listint_safe - prints a listint_t list safely (handles loops)
 * @head: pointer to the start of the list
 *
 * Return: number of nodes printed
 * Exits with status 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop_node;
	size_t count = 0;

	if (head == NULL)
		return (0);

	loop_node = detect_loop(head);

	if (!loop_node)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}
	else
	{
		count += print_until_loop(head, loop_node);
		count += print_loop(loop_node);
	}

	return (count);
}
