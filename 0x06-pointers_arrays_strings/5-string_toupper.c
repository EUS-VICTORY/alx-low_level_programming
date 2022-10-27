#include "main.h"
/**
 * string_toupper - Function that changes all lowercase letters of a string to uppercase letters
 * Return: Always 0
 */
char *string_toupper(char *)
{
int length;
length = 0;
while (x[length] != '\0')
{
if (x[length] >= 97 && x[length] <= 122)
{
x[length] = x[length] - 32;
}
length++;
}
return (x);
}

}
