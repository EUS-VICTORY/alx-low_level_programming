#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: double pointer to the list
 * @index: index of the node
 * Return: number of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
