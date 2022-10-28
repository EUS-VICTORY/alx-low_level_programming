#include"main.h"
/**
 * _strcmp - Function compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, -ve if s1 < s2, otherwise +ve.
 */
int _strcmp(char *s1, char *s2)
{
int counter, cmpVal;
counter = 0;
while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
counter++;
}
cmpVal = s1[counter] - s2[counter];
return (cmpVal);
}
