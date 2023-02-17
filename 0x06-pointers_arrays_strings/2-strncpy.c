#include "main.h"
/**
 * _strncpy - Function that copies a string
 * exactly like strncpy
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be copied
 * Return: exact string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
