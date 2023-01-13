#include "lists.h"

/**
 * dlists_len - prints number of elements in a linked list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
