#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to head pointer of linked list
 * @index: index of the list where the node is deleted.
 * Return: 1 if it successed, -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prv, *crnt;

	if (*head == NULL)
		return (-1);

	crnt = *head;
	prv = NULL;

	for (i = 0; i < index && crnt != NULL; i++)
	{
		prv = crnt;
		crnt = crnt->next;
	}

	if (i < index || crnt == NULL)
		return (-1);

	if (prv == NULL)
		*head = crnt->next;
	else
		prv->next = crnt->next;

	free(crnt);
	return (1);
}
