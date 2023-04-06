#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head pointer of linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *next;

	if (head == NULL)
		return (NULL);

	prv = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = next;
	}
	(*head) = prv;

	return (*head);
}
