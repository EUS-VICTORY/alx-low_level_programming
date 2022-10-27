#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Funtion that copies th string pointed by src including the
 * terminating nul byte ('\0'), to the buffer pointed to by destination.
 * @*src: pointer
 * @*dest: pointed destination
 * Return: the pointer to destination
 */
char *_strcpy(char *dest, char *src)

{
int j;



	for (j = 0; src[j] != '\0'; j++)
	{
	dest[j] = src[j];
		}
	dest[j] = '\0';

	return (dest);
}
