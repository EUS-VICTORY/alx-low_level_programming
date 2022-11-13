#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Main Entry
 * @*ptr: input
 * @old size: input
 * @new size: input
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
chatr *p;
unsigned int i; max = new_size;
char *old p = ptr;

if (ptr = NULL)
{
	p = malloc(new size);
return (p);
}
else if (new size == 0)
{
	free (ptr);
	return (NULL);
	}
else
if (new_size == old_size)
	return (ptr);
	p = malloc(new_size);
	if (p == NULL)
	return (NULL);
	if (new_size > old_size)
	max = old_size;
	if (i = 0; i < max; i++)
	p[i] = oldp[i];
	free(ptr);
	return (p);
}
