#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_nodes_before_loop - Prints listint_t nodes before the loop.
 * @node: The starting node of the list.
 *
 * Return: The number of nodes printed.
 */
size_t print_listint_nodes_before_loop(const listint_t *node)
{
	size_t count = 0;

	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		count++;
		node = node->next;
	}

	return (count);
}

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops).
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			break;
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}

	if (slow == fast)
	{
		slow = head;
		count += print_listint_nodes_before_loop(slow);
	}
	else
	{
		count += print_listint_nodes_before_loop(slow);
	}

	return (count);
}
