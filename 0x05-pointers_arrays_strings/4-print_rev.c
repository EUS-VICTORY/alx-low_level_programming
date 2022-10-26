#include "main.h"

/**
 *print_rev - function that prints a string in reverse 
 * followed by a new line
 * @*s: string to be reversed
 */

void print_rev(char *s)
{
int i;
i = string_length(s) - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}

/**
* string_length - finds the length of a string.
* Return: length of c.
* @pointer: pointer.
*/

int string_length(char *pointer)

{
int c = 0;
while (*(pointer + c) != '\0')
{
c++;
}
return (c);
}
