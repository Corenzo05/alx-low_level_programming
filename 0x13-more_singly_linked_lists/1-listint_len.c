#include "lists.h"

/**
 * listint_len - returns the numbers of elements in a list.
 * @h: linked list
 * Return: the numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
