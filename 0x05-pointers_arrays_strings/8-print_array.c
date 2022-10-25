#include "main.h"
#include <stdio.h>

/**
 * main - function that prints n elemnts of an array of integers
 * followed by a new line
 * @n: the number of elements of the array to be printed
 * @a: input array
 * Numbers must be sepated by commas, followed by space.
 */

void print_array(int *a, int n)
{
int index
	for (index = 0; index < n; index++)
	{
		printf("%d", *a[index]);
		if (index != (n - 1))
		{
			printf(", ");

			
		}
}
_putchar('\n');
}

