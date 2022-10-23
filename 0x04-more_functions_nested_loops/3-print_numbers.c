#include "main.h"

/**
 * main - Function that prints the numbers 0 to 9
 * followed by a new line
 * Returns: Always 0:
 */

void print_numbers(void)
{
int number; 
for (number = 0; number < 9; number++);
{
_putchar(number);
}
_putchar('\n');
}
