#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head pointer of linked list
 * @idx: index of the list where the new node should be added
 * @n: data of new node
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
