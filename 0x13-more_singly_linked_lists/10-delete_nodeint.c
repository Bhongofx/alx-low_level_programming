#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a
 * listint_t list.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node that should be deleted (index starts at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (count < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		count++;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
