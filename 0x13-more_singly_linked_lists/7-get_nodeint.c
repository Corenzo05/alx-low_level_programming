#include "lists.h"

/**
 * get_nodeint_at_index - return the nth of a linked list
 * @head: linked list
 * @index: index of the node
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
