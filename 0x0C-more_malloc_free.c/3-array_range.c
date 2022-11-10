#include"main.h"
#include <stdlib.h>

/**
 * arrauy_range - function creates an array of integers
 * @min: array input
 * @max: array input
 * Return: 0
 */

int *array_range(int min, int max)
{
	int mini, l;
	int *a;
	if (min > max)
		return (NULL);
	l = max - min + 1;
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++; min++)
	{
		a[i] = min;
	}
	return (a);
}
