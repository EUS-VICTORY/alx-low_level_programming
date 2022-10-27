#include"main.h"
/**
 * _strcmp - Function compares two strings
 * @char *s1: first string
 * @char *s2: second string
 * Return: 0 if equal, -ve if s1 < s2, otherwise +ve.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		break;
		s1++;
		s2++;
	}
	return (*(unsigned int *)s1 - *(unsigned int *)s2);
}

