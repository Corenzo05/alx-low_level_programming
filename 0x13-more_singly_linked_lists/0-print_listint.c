#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_nodes += 1;
		h = h->next;
	}
	return (n_nodes);
}
