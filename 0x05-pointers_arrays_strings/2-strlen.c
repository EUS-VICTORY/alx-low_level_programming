
#include "main.h"
/**
 * _strlen - Function that return the length of a string
 *@s : string whose length is to be returned
 */
int _strlen(char *s)
{
int index;
for (index = 0; s[index] != '\0'; index++);
return (index);
}
