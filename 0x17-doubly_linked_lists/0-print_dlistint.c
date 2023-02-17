#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the list
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
  
{
  const dlistint_t *ptr = h;
  size_t nodes = 0;
  
  while (ptr && ptr->prev)
    ptr = ptr->prev;
  while (ptr)
    
    {
      printf("%d\n", h->n); 
      h = h->next;
      nodes++;
    }  
  return (nodes);
}
