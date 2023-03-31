#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
