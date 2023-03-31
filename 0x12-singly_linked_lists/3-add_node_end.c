#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: linked list
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t nele;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (nele = 0; str[nele]; nele++)
		;

	new->str = strdup(str);
	new->len = nele;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
