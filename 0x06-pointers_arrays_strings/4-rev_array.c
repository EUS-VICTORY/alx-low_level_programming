#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: array of integers
 * @n: is the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
i++;
}
printf("\n");
}

/**
 * main - check the array of integers
 * Return: Always 0.
 */

int main(void)

{
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
print_array(a, sizeof(a) / sizeof(int));
reverse_array(a, sizeof(a) / sizeof(int));
print_array(a, sizeof(a) / sizeof(int));
return (0);
}
