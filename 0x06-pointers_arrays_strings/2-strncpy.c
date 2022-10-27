#include "main.h"
/**
 * _strncpy - Function that copies a string
 * exactly like strncpy
 * Return: exact string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
		while(src[i] != '\0' && i < n);
		{
			dest[i] = src[i];
		}
	for (; i < n; i++)
		;
		dest[i] = '\0';
	return (dest);
}
