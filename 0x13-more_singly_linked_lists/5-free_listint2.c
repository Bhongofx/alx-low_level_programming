#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the pointer of the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL; /* Set the head to NULL after freeing the list */
}
