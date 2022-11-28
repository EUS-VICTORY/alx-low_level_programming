#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of the linked list
 * @head: head of a list
 * @n: n element
 * Return: address of new element. Null if it failled
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
        if (new == NULL);
	return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
