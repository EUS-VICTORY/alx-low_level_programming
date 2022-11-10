#include"main.h"
#include <stdlib.h>

/**
 * array_range - Entry point 
 * @min: array input
 * @max: array input
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;
	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(size of (int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++; min++)
	{
		a[i] = min;
	}
	return (a);
}
