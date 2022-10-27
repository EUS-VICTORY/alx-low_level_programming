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
int i = 0, j = 0;
for (; a[j] != '\0'; j++)
;
for (; i < n; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
