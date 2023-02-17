#include "main.h"
/**
 * _strncat - Function that concatenates two strings
 * while appending only n byte from source
 * @dest: destination string
 * @src: source string for concatenation
 * @n: number of bytes from src that will be appended
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int length, j;
/* j is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */

length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j = 0; j < n && src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
