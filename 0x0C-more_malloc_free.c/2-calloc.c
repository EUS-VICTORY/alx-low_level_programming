#include "main.h"
#include <stdlib.h>

/**
 * _calloc - main entry
 * @nmemb: input
 * @unsigned int: input
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int;

if (nmemb == 0 || size == 0)
	return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
	return (p);
}
