#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
