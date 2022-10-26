#include "main.h"

/**
 * _strlen - Function that return the length of a string
 *@s : string whose length is to be returned
 * Return: Always 0
 */

int _strlen(char *s)
{
int index;
for (index = 0; s[index] != '\0'; index++)
{
index++;
}
return (index);
}
