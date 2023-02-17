#include "function_pointers.h"


/**
 * int_index - fuunction that searches for integer
 * @array: array of eleements
 * @size: number of elements in array
 * @cmp: pointer to the function used to compare values
 * Return: index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
		if (cmp(array[i]))
		return (i);
	return (-1);
}
