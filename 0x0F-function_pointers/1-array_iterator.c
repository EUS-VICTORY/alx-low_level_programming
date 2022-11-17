#include "functions_pointers.h"

/**
 * array_iterator - iterates function action
 * @array: pointer to int
 * @size: size of array
 * @action: pointer to array iterator
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
