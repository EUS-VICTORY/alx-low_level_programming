#include "main.h"

/**
 *print_rev - function that prints a string in reverse 
 * followed by a new line
 * @*s: the string to print in reverse
 */

void print_rev(char *s)
{
	int index;
	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\n'; index--)
{
_putchar(s[index]);
}
_putchar("\n");
}
