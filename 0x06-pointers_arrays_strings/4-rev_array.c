#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: array of integers
 * @n: is the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int temp, counter;
n = n - 1;
counter = 0;
while (counter <= n)
{
temp = a[counter];

a[counter++] = a[n];
a[n--] = temp;
}
}
