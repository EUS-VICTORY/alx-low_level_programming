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
if (n <= 98)
	for (n = n; n <= 97; n++)
		printf("%d, ", n);
}
else 
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("98\n");
}
