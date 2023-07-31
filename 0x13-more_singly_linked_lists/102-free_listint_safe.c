#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely (handles loops).
 * @h: Pointer to the pointer of the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;

	current = *h;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (size);
}
