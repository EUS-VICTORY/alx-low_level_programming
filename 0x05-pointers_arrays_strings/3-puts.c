#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints a string 
 * followed by a new line to a stdoput
 * Return: Always Success
 */
void _puts(char *str)
{
int index;
for(index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
