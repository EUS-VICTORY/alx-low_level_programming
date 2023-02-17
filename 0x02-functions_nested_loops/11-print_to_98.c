#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * prints all natural numbers up to number 98
 * numbers printed in order from first entry -n to last entry -98
 * and are separated by commas followed by spaces.
 * Return: Always 0
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
