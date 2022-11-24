#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of the list
 * @head: address of the first node of a list
 * @str: address of the string to be inserted into the new node
 * Retunr: address of new element(node)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, temp2;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == 0)
	return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
	return (NULL);
	}
	while (str[length])
	length++;
	temp->len = length;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	temp2 = *head;
	while (temp2->next)
	temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
