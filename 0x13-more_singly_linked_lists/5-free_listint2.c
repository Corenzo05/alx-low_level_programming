#include "lists.h"

/**
 * free_listint2 - frees a linked list, ans sets head to NULL
 * @head: linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
