#include "main.h"
/**
 * string_toupper - Function that changes all lowercase letters of a string to uppercase letters
 * Return: Always 0
 */
char *string_toupper(char *)
{
	int len, i;
	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	return (s);
}
