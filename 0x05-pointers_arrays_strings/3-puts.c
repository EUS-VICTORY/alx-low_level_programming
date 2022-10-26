#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints a string
 * @str: the string to print
 */
void _puts(char *str)
{
int i;
for(i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
