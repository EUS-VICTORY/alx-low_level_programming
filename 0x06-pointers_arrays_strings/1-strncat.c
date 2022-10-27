#include "main.h"
/**
 * _strncat.c - Function that concatenates two strings 
 * while appending only n byte from source
 * @dest: destination string
 * @src: source string for concatenation
 * @n: number of bytes from src that will be appended
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && n != j)
{
*(dest + i) = src[j];
j++;
i++;
}
*(dest + i) = '\0';
return (dest);
}
