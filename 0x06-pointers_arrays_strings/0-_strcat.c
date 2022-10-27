#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @*dest: destination string at the end of which the terminating null byte is overwritten
 * @src:string to be appended
 * Returns: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int length, j;
length = 0;

while (dest[length] != '\0')

{

	length++;

}
for (j = 0; src[j] != '\0'; j++, length++)
{

	dest[length] = src[j];

}
dest[length] = '\0';
return (dest);
}
