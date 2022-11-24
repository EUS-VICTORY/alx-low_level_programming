#include "lists.h"

/**
 * list_len - Prints the number of elements in a linked list
 * @h: pointer to the list
 * Return: integer
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;

	while (temp)
	{
		counter;
		temp = temp->next;
	}
	return (counter);
}

