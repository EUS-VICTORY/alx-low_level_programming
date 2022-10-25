
#include "main.h"
/**
 * main - Function that returns the length of a string
 *Return: Always 0
 */
int _strlen(char *s)
{
int index;
for (index = 0; s[index] != '\0'; index++);
return (index);	
}
