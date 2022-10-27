#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @*dest: destination string at the end of which the terminating null byte is overwritten
 * @src:string to be appended
 * Returns: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int len = 0;	
char *cpy;
for (; dest[len] != '\0'; len++)
;
cpy = dest + len;
while (*src != '\0')
*cpy++ = *src++;			
*cpy = '\0';
return (dest);
}
