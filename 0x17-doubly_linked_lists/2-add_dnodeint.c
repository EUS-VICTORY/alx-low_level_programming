#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of the list
 * @head: double pointer to list
 * @n:data to insert in the new node
 * Return: address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
