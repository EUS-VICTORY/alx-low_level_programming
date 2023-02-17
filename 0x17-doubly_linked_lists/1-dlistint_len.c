#include "lists.h"



/**

<<<<<<< HEAD
 * dlistint_len - Return list len

 * @h: struct list

 * Return: list_len

 */


=======
 * dlistint_len - returns the number of nodes in a doubly linked list

 * @h: pointer to the list

 *

 * Return: number of nodes

 */
>>>>>>> 6bcd7c91bbd67e3287755633a0ee3f0393dcdfcb

size_t dlistint_len(const dlistint_t *h)
  
{
  
<<<<<<< HEAD
  size_t len = 0;
  
  int i = 0;
  

  
  for (i = 0; h; i++)
    
    {
      
      len += 1;
=======
  size_t nodes = 0;
  

  
  if (!h)
    
    return (0);
  

  
  while (h)
    
    {
      
      nodes++;
>>>>>>> 6bcd7c91bbd67e3287755633a0ee3f0393dcdfcb
      
      h = h->next;
      
    }
  
<<<<<<< HEAD
  return (len);
=======

  
  return (nodes);
>>>>>>> 6bcd7c91bbd67e3287755633a0ee3f0393dcdfcb
  
}
